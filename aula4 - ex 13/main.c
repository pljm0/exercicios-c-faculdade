#include <stdio.h>
#include <stdlib.h>

/* 
faça um programa que receba como dados de entrada duas notas de varios alunos e mostre como resultado:
a)qual foi a maior media obtida
b)quantos alunos tiveram media maior ou igual a 7
 */

main() {
	
	int i = 1, qnt7;
	float nota1, nota2, media, mediamaior=0;
	
	while(i != 0) {
		printf("Digite a primeira nota: ");
		scanf("%f", &nota1);
		printf("Digite a segunda nota: ");
		scanf("%f", &nota2);

		media = (nota1+nota2)/2;

		if(media > mediamaior) {
		mediamaior = media;			

		}
		
		if(media >= 7) {
			qnt7++;
			
		}
		
		printf("Digite 1 para continuar ou 0 para sair \n");
		scanf("%d", &i);
		system("cls");
		
	}
	
	printf("a)qual foi a maior media obtida: %.1f", mediamaior);
	printf("\nb)quantos alunos tiveram media maior ou igual a 7: %d", qnt7);
	
}
