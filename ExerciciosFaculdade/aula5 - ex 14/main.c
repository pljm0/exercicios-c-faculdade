#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include "ValorServico.h"

/*
faça um programa que receba como dados de entrada o valor de um serviço e mostre como resultado o valor do serviço com 10% de desconto

obs: utilizar função em um arquivo .h
*/

int main() {
	
	float valor;
	
	printf("Digite o valor do servico: ");
	scanf("%f", &valor);
	
	valorServico(valor);	

	return 0;
	
}

