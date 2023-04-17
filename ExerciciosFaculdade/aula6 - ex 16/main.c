#include <stdio.h>
#include <stdlib.h>

/* 
faça um programa que receba como dados de entrada 5 numeros inteiros e mostre como resultado:
a) a lista com os numeros digitados
b) a media dos numeros digitados
obs: utilizar no maximo 2 variaveis e 1 vetor
*/

int main() {
	
	int i;
	float num[5], media;
	
	for(i = 0; i < 5; i++) {
		printf("Digite o %do numero \n", i+1);
		scanf("%f", &num[i]);
		media += num[i];
		
	}
	
	printf("Valores digitados: ");
	
	for(i = 0; i < 5; i++) {
	printf("\n %.2f", num[i]);
	
	}
	
	printf("\nMedia: %.2f", media / 5);
	
	return 0;
	
}
