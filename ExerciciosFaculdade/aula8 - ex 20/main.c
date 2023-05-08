#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
Faça um programa que receba como dados de entrada o nome e o salario de 5 funcionarios, ao final mostrar:
a) A lista com os nomes e os salarios digitados
b) A média dos salarios
Obs: utilizar obrigatoriamente struct
*/

struct {

	char nome[30];
	float salario;
	
}dadosFuncionario[5];

main() {
	
	int i;
	float soma;
	
	for(i=0; i<5; i++) {
		
		printf("Digite o nome do funcionario: ");
		scanf("%s", &dadosFuncionario[i].nome);
		printf("Digite o salario do funcionario: \nR$");
		scanf("%f", &dadosFuncionario[i].salario);
		
		soma += dadosFuncionario[i].salario; 
		
	}

	printf("\nLista com nomes e salarios: \n");	

	for(i=0; i<5; i++) {
		
		printf("\nNome: %s\n", dadosFuncionario[i].nome);
		printf("Salario: R$%.2f\n", dadosFuncionario[i].salario);
		
	}
	
	printf("\nMedia dos salarios: %.2f", soma / 5);

}
