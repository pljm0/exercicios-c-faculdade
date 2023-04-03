#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

/* 
Faça um programa que imprima na tela 6 numeros inteiros entre 1 e 60 cada um de uma cor
*/

main() {
	
	int i;
	
	srand(time(0));

	for(i=0; i<6; i++) {
		textcolor(rand() % 12);
		printf("%d ", rand() % 61);
		getch();
		
	}
	
}
