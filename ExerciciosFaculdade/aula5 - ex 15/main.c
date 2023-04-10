#include <stdio.h>
#include <stdlib.h>
#include "Calcular.h"

/* 
faça um programa em que o usuario irá escolher uma das 4 operações aritméticas e também terá a opção de sair do programa
quando digitar 0. Ao final informar:
quantas vezes o programa rodou, e a cada rodada mostrar opcao escolhida pelo usuario
obs: utilizar função obrigatoriamente
*/

int main() {
	
	int n1, n2, i = 1, opcao, qnt = 0;
	
	printf("Escolha uma opcao:  \n1 Soma (+) \n2 Subtracao (-) \n3 Multiplicacao (*) \n4 Divisao (/) \n0 Sair\n");
	scanf("%d", &i);

	while(i != 0) {
	
		qnt++;
		
		printf("\nDigite o primeiro valor: ");
		scanf("%d", &n1);
		
		printf("Digite o segundo valor: ");
		scanf("%d", &n2);

		switch(i) {
		case 1:
			somar(n1, n2);
			
		break;
		
		case 2:
			subtrair(n1, n2);
			
		break;
		
		case 3:
			multiplicar(n1, n2);
			
		break;
		
		case 4:
			dividir(n1, n2);
			
		break;
			
		default:
			printf("Opcao invalida, tente novamente");
			
		}	
		
		getch();
		system("cls");
		
		printf("\nEscolha uma opcao:  \n1 Soma \n2 Subtracao \n3 Multiplicacao \n4 Divisao \n0 Sair\n");
		scanf("%d", &i);
		
	}

	printf("\nQuantidade de vezes que o programa rodou: %d", qnt);
	
	return 0;
}
