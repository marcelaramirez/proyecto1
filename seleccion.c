//Algoritmo selección
#include<stdio.h>
#include<conio.h>

int x[4]={1,4,8,6};
int n=4,j=0,i=0;
int temp=0,minimo=0;

void main(){
	clrscr();
	for(i=0;i<n-1;i++){
		minimo=i;
		for(j=i+1;j<n;j++){
			if(x[minimo] > x[j]){
				minimo=j;
			}
		}
		temp=x[minimo];
		x[minimo]=x;
		x=temp;
	}

	for(i=0;i<n;i++){
		printf("%d",x);
	}
	
	getch();
}