#include <stdio.h>
#include <stdlib.h>

/* 
faça um programa na linguagem c que receba como dados de entrada o valor de uma venda e a quantidade de parcelas e 
mostre como resultado o valor da venda com desconto obedecendo a seguinte tabela: 
0 ou 1 - desconto de 5% 
2 ate 3 - juros de 5%
4 ou mais - juros de 10%
*/

main() {
	
	float valor;
	int parcelas;
	
	printf("Digite o valor da venda: R$");
	scanf("%f", &valor);
	
	printf("Digite a quantidade de parcelas: ");
	scanf("%d", &parcelas);
	
	if(parcelas == 0 && parcelas == 1) {
		printf("O valor da venda parcelado em %d vezes e de: R$%.2f", parcelas, ((valor*5/100)-valor)*-1);
		
	}else if(parcelas == 2 && parcelas == 3) {
		printf("O valor da venda parcelado em %d vezes e de: R$%.2f", parcelas, (valor*5/100)+valor);
		
	}else {
		printf("O valor da venda parcelado em %d vezes e de: R$%.2f", parcelas, (valor*10/100)+valor);
		
	}
	
}
