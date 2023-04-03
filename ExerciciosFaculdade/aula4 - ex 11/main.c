#include <stdio.h>
#include <stdlib.h>

/* 
Faça um programa que receba como dados de entrada varios numeros inteiros e mostre como resultado:
a)quantas vezes o programa rodou
b)qual foi o maior numero digitado
O programa deve ser finalizado quando for digitado o valor 0
*/

main() {
	
	int i = 1, n1, maior = 0, qnt = 0;
	
	while(i != 0) {
		printf("Digite um numero: ");
		scanf("%d", &n1);
		
		if(n1 > maior) {
			maior = n1;
		}
		
		qnt++;
		
		printf("Digite 1 para continuar ou 0 para sair\n");
		scanf("%d", &i);
		
	}
	
	printf("a)quantas vezes o programa rodou: %d\n", qnt);
	printf("b)qual foi o maior numero digitado: %d", maior);
	
}
