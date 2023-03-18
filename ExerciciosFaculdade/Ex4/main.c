#include <stdio.h>
#include <stdlib.h>

/*
 Fala um programa que recebe como dados de entrada um número inteiro
e mostre se este numero esta no intervalo entre 10 e 60. 
*/

main() {
	
	int n1;
	
	printf("Digite um numero e tecle enter: ");
	scanf("%d", &n1);
	
	if(n1 >= 10 && n1 <= 60) {
		printf("O numero %d esta no intervalo entre 10 e 60. ", n1);
		
	}else {
		printf("O numero %d nao esta no intervalo entre 10 e 60. ", n1);
		
	}
}
