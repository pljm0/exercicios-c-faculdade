#include <stdio.h>
#include <stdlib.h>

/* 
Modelo 1
o valor de 10 vendas onde trabalham 2 vendedores e mostre como resultado:  
a) Qual o vendedor que fez mais vendas;
b) A lista dos valores vendidos por cada vendedor.   
c) A Media das vendas efetuadas;
*/

struct Vendas {
	
	float valores[10];
	int qv;
	
}vendedor1, vendedor2;

int main() {
	
	int i, es;
	float soma = 0;
	
	for(i=0; i<10; i++) {
		
		printf("Digite o codigo do vendedor (1 ou 2): ");
		scanf("%d", &es);
		printf("Digite o valor da venda: R$");
		if(es == 1) {
			scanf("%f", &vendedor1.valores[i]);
			vendedor1.qv++;	
			
		}
		
		if(es ==2) {
			scanf("%f", &vendedor2.valores[i]);
			vendedor2.qv++;	
			
		}
		
		soma += vendedor1.valores[i] + vendedor2.valores[i]; 
		
	}
	
	printf("\na) Qual o vendedor que fez mais vendas: \n");
	printf("\n");
	printf("Vendedor 1: %d vendas \nVendedor 2: %d vendas \n", vendedor1.qv, vendedor2.qv);
	if(vendedor1.qv > vendedor2.qv) {
		printf("\nVendedor 1 realizou mais vendas\n");
		
	}else if(vendedor2.qv > vendedor1.qv) {
		printf("\nVendedor 2 realizou mais vendas\n");
		
	}else {
		printf("\nAmbos realizaram o mesmo numero de vendas. \n");
	}

	printf("\nb) Lista dos valores vendidos por cada vendedor: ");
	printf("\n");
	printf("\nVendedor 1:");

	for(i=0; i<10; i++) {
		if(vendedor1.valores[i] != 0) {
			printf("\n R$%.2f", vendedor1.valores[i]);
			
		}

	}
	
	printf("\n");
	printf("\nVendedor 2:");
	for(i=0; i<10; i++) {
		if(vendedor2.valores[i] != 0) {
			printf("\n R$%.2f", vendedor2.valores[i]);
			
		}
		
	}
	
	printf("\n");
	printf("\n c) A Media das vendas efetuadas: ");
	printf("%.2f", soma/10);

	return 0;
}
