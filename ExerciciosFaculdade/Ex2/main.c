#include <stdio.h>
#include <stdlib.h>

/*
 Faça um programa que receba como dados de entrada dois valores
e mostre como resultado as 4 operações matematicas. 
*/

main() {
	
	int n1, n2;
	
	printf("Digite um valor e tecle enter: ");
	scanf("%d", &n1);	
	
	printf("Digite outro valor e tecle enter: ");
	scanf("%d", &n2);
	
	printf("\n Soma: %d", n1 + n2);
	printf("\n Subtracao: %d", n1 - n2);
	printf("\n Multiplicacao: %d", n1 * n2);
	printf("\n Divisao: %d", n1 / n2);
	
}
