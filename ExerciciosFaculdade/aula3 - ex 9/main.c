#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

/* 
faça um programa que receba como dado de entrada 5 numeros inteiros e mostre como resultado: 
a)qual foi o maior numero digitado
b)qual foi o menor numero digitado
obs: usar no maximo 4 variaveis
*/

main() {
	
	int n1, i, menor=9999, maior=0;
	
	for(i=0; i<5; i++) {
		printf("Digite um numero: ");
		scanf("%d", &n1);
		
		if(n1 > maior) {
			maior = n1;
		}
		
		if(n1 < menor) {
			menor = n1;
		}
		
	}
	
	printf("Maior numero digitado: %d", maior);
	printf("\nMenor numero digitado: %d", menor);
	
}
