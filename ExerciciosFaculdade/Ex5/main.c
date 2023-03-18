#include <stdio.h>
#include <stdlib.h>

/* 
Faça um programa que receba como dados de entrada 3 números inteiros
e mostre como resultado qual o maior número digitado. 
*/

main() {
	
	int n1, n2, n3;
	
	printf("Digite o primeiro valor e tecle enter: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo valor e tecle enter: ");
	scanf("%d", &n2);
	
	printf("Digite o terceiro valor e tecle enter: ");
	scanf("%d", &n3);
	
	if(n1 > n2 && n1 > n3) {		
		printf("Entre os valores digitados, o primeiro valor e o maior %d", n1); 
		
	}else if(n2 > n1 && n2 > n3) {		
		printf("Entre os valores digitados, o segundo valor e o maior %d", n2);
		
	}else if(n3 > n1 && n3 > n2) {		
		printf("Entre os valores digitados, o terceiro valor e o maior %d", n3);
		
	}else {
		printf("Ocorreu um erro. ");
	}

}
