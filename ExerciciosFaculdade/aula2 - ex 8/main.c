#include <stdio.h>
#include <stdlib.h>

/* 
faça um programa que receba como dados de entrada o salario de uma pessoa e o seu tempo de serviço e mostre como resultado 
o salario final onde: 
tempo > 5 anos - bonus de 10%
caso o salario final seja > 1800 - descontar INSS de 11%
*/

main() {
	
	float salario, salariofinal;
	int tempo;
	
	
	printf("Digite o valor do seu salario: R$");
	scanf("%f", &salario);
	
	printf("Digite o tempo de servico: ");
	scanf("%d", &tempo);
	
	if(tempo >= 5) {
		salariofinal = (salario*10/100)+salario;
		printf("Salario final: R$%.2f", salariofinal);

	}
	
	if(salariofinal >= 1800) {
		printf("\nSalario final com desconto INSS: R$%.2f", salariofinal-(salariofinal*11/100));
	
	}
	
	printf("Salario Atual: R$%.2f", salario);
	
}
