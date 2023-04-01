#include <stdio.h>
#include <stdlib.h>

/* 
Elaborar um programa em C que imprima de forma automatica a tabuada de multiplicacao
dos numeros de 1 a 5; 
*/

main() {
	
	int i, i2;
	
	for(i=0 ; i <= 5; i++) {
		for(i2=0; i2 <= 10; i2++) {
			// gotoxy(30, cont2);
			printf("\n %d * %d = %d", i, i2, i*i2);
		}
	
		getch();	
		
	}
	
	
}
