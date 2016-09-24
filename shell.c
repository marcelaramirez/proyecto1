//Algoritmo Shell
#include<stdio.h>
#include<conio.h>

int a[5];
int n=5;

void main(){

	int inter=(n/2),i=0,j=0,k=0,aux;
	clrscr();

	for (i=0; i<5; i++){
		printf("INSERTA UN VALOR DEL INDICE %d", i);
		scanf("%d",& a);
	}

	while(inter>0){
		for(i=inter;i<n;i++){
			j=i-inter;
			while(j>=0) {
			k=j+inter;
				if(a[j]<=a[k]){
					j--;
				}
				else{
					aux=a[j];
					a[j]=a[k];
					a[k]=aux;
					j=j-inter;
				}
			}
		}

		inter=inter/2;
	}

	for(i=0;i<5;i++){
		printf("%d n",a);
		getch();
	}
}   