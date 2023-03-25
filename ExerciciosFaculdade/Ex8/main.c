#include <stdio.h>
#include <stdlib.h>

/* 
faça um programa que imprima na tela o alfabeto em Maiusculo e Minusculo
*/

main() {

	int i;
	
	printf(" Alfabeto:\n ");

	for(i=0; i<255; i++) {

		if(i >= 65 && i <= 90) {
			printf("%d  eh o caractere  %c \n", i, i);
		}
		
		if(i >= 97 && i <= 122) {
			printf("%d  eh o caractere  %c \n", i, i);
		}
	}
}


