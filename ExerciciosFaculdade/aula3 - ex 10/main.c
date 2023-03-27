#include <stdio.h>
#include <stdlib.h>

/* 
faça um programa que receba como dados de entrada o valor de 5 vendas e mostre como resultado
a)quantas vendas foram maiores que 500
b)qual foi a media das vendas
Obs: Utilizar no maximo 4 variaveis e nao utilizar vetores
*/

main() {
	
	int i, maior = 0;
	float valor, media = 0;
	
	for(i=0; i<5; i++) {
		printf("Digite o valor da venda: R$");
		scanf("%f", &valor);
		
		if(valor > 500) {
			maior++;
		}
		
		media = valor + media;
	}
	
	printf("Quantidade de vendas maiores que R$500: %d", maior);
	printf("\nMedia das vendas: %.2f", media/5);
	
}
