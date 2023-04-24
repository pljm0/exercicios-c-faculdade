#include <stdio.h>
#include <stdlib.h>

/* 
faça um programa que receba como dados de entrada o valor do salario calculando o desconto de inss de 11% de 5 funcionarios e mostre como resultado:
a) a lista com os salarios e os descontos
b) qual foi o maior salario
c) a media dos descontos
*/

main() {
	
	int i;
	float salario[5], desconto[5], maior = 0, soma = 0;
	
	for(i = 0;i < 5;i++) {
		printf("Digite o valor do salario: R$");
		scanf("%f", &salario[i]);
		
		desconto[i] = salario[i] * 11 / 100; 
		
		if(salario[i] > maior) {
			maior = salario[i];
			
		}

		soma += desconto[i];
		
	}

	printf("\nLista de salarios: ");	
	for(i = 0;i < 5;i++) {
	printf("\nR$%.2f", salario[i]);
	
	}
	
	printf("\nLista de salarios com desconto INSS: ");	
	for(i = 0;i < 5;i++) {
	printf("\nR$%.2f", desconto[i]);
			
	}
	
	printf("\nMaior salario: R$%.2f", maior);
	printf("\nMedia dos descontos: %.2f", soma / 5);
	
}
