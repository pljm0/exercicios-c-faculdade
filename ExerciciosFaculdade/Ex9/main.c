#include <stdio.h>
#include <stdlib.h>

/* 
Faça um programa que seja um emulador de relogio digital
 */

main() {
	
	int sec, min, hour;
	
	for(hour=0; hour<=24; hour++) {
		for(min=0; min<60; min++ ) {
			for(sec=0; sec<60; sec++) {
				printf("%d : %d : %d \n", hour, min, sec);
				sleep(1);
				system("cls");
		
			}
		}
		
	}
		
}
