#include <stdio.h>
#include <stdlib.h>

/*
 Faça um programa que verifica se um número é par ou ímpar. 
*/

main() {
	
	int n1;
	
	printf("Digite um valor e tecle enter: ");
	scanf("%d", &n1);
	
	if(n1 % 2 == 0) {
		printf("O numero %d e par", n1);
			
	}else {
		printf("O numero %d e impar", n1);
		
		}
	
}
