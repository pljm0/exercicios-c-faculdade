#include <stdio.h>
#include <stdlib.h>

/* 
Faça um programa que receba como dados de entrada 5 numeros inteiros e mostre como
resultado o maior numero digitado
Obs: utilizar apenas 3 variaveis
 */

main() {
	
	int i, valor, maior;
	
	for(i=0; i<5; i++) {
		printf("Digite um numero: ");
		scanf("%d", &valor);
		
		if(valor > maior) {
			maior = valor;
		}
	}
	
	printf("O maior numero digitado foi: %d", maior);
	
}
