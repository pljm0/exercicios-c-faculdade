#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include "ValorServico.h"

/*
fa�a um programa que receba como dados de entrada o valor de um servi�o e mostre como resultado o valor do servi�o com 10% de desconto

obs: utilizar fun��o em um arquivo .h
*/

int main() {
	
	float valor;
	
	printf("Digite o valor do servico: ");
	scanf("%f", &valor);
	
	valorServico(valor);	

	return 0;
	
}

