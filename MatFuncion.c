#include <stdio.h>
#include <stdlib.h>
#define R 6
#define C 6

void rellenar(int [][C]);
void imprimir(int [][C]);

void main(){
	int a[R][C] = {0};
	rellenar(a);
	imprimir(a);	
}

void rellenar(int a [R][C]){
	int i, j;
	srand(time(NULL));
	for(i = 0; i <R ; i++){
		for(j=0; j<C; j++){
			a[i][j] = rand() % 10;
		}
	}
}

void imprimir(int a [R][C]){
	int i,j;	
	for(i = 0; i <R ; i++){
		for(j=0; j<C; j++){
			printf("%d\t", a[i][j]);
		}
		puts("");
	}
}









