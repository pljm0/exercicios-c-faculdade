#include <stdio.h>
#include <stdlib.h>

/*
 Fa�a um programa que receba como dados de entrada 2 n�meros e mostre
como resultado a m�dia dos valores digitados. 
*/

main() {
	
	float n1, n2;
	
	printf("Digite o primeiro valor e tecle enter: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo valor e tecle enter: ");
	scanf("%f", &n2);
	
	printf("A media dos valores digitados e: %.2f: ", (n1 + n2) / 2);
	
}
