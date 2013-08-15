#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rellenar(int []);
void imprimir(int []);

void main(){
	int a[6] = {0};
	rellenar(a);
	imprimir(a);	
}

void rellenar(int a [6]){
	int i;
	
	for(i = 0; i <6 ; i++)
		a[i] = rand() % 10;
}

void imprimir(int a [6]){
	int i;
	
	for(i = 0; i <6 ; i++)
		printf("%d ", a[i]);
}









