#include <stdio.h>
#include <stdlib.h>

/* 
Faça um programa que leia 5 numeros e informe a média dos numeros digitados.
Obs: utilize a estrutura FOR.
*/

main() {
	
	int i, n1;
	float media;
	
	for(i=0; i<5; i++) {
		printf("Digite um numero: ");
		scanf("%d", &n1);
		
		media += n1;
		
	}
	
	printf("A media dos numeros apresentados eh: %.2f", media/5);
	
	
}
