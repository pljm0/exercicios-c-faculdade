#include <stdio.h>
#include <stdlib.h>

/* 
Elaborar um emulador de despertador em C
*/

main() {
	
	int sec, min, hour;
	int secdesp, mindesp, hourdesp;
	
	printf("Digite o horario para despertar: ");
	scanf("%d", &hourdesp);
	printf("Digite os minutos para despertar: ");
	scanf("%d", &mindesp);
	printf("Digite os segundos para despertar: ");
	scanf("%d", &secdesp);
	
	for(hour=0; hour<=24; hour++) {
		for(min=0; min<60; min++ ) {
			for(sec=0; sec<60; sec++) {
				printf("%d : %d : %d \n", hour, min, sec);
				sleep(1);
				system("cls");
				
				if(hour == hourdesp && min == mindesp && sec == secdesp) {
					printf("\a");
					sleep(1);
					printf("\a");
					sleep(1);
					printf("\a");
					
				}
		
			}
		}
		
	}
		
}
