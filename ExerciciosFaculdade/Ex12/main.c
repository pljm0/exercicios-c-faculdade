#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia 5 numeros inteiros e mostre qual foi o maior e qual foi o menor numero digitado.
 */

main() {
	
	int i, n1, maior, menor;
	
	for(i=0; i<5; i++) {

		printf("Digite um numero: ");
		scanf("%d", &n1);
		
		if(i == 0) {
			maior = n1;
			menor = n1;
			
		}
		
		if(n1 > maior) {
			maior = n1;
		}
		
		if(n1 < menor) {
			menor = n1;
		}
		
	}
	
	printf("O maior numero digitado foi: %d\n", maior);
	printf("O menor numero digitado foi: %d", menor);
	
}
