#include <stdio.h>
#include <stdlib.h>

/* 
Utilizando o for, faça um programa em C que leia 10 numeros, apois a leitura dos numeros,
voce devera informar:
a) a soma dos numeros lidos;
b) o maior numero lido;
c) o menor numero lido;
d) a media dos numeros pares;
e) a media dos numeros maiores que 20;
f) a quantidade de numeros pares lidos;
g) a soma dos numeros impares lidos.
 */

main() {
	
	int i, n1, maior, menor, qntpar = 0, qntimpar = 0, qntmaior = 0, 
	soma = 0, somapar = 0, somamaior = 0, somaimpar = 0;
	
	float mediapar, mediamaior;

	
	for(i=0; i<5; i++) {
		printf("Digite um numero: ");
		scanf("%d", &n1);
		
		soma += n1;

		if(i == 0) {
			maior = n1;
			menor = n1;
			
		}
		
		if(n1 > maior) {
			maior = n1;
			
		}
		
		if(n1 < menor) {
			menor = n1;
			
		}
		
		if(n1 % 2 == 0) {
			qntpar++;
			somapar += n1;
			
		}
		
		if(n1 % 2 != 0) {
			qntimpar++;
			somaimpar += n1;
			
		}
		
		if(n1 > 20) {
			qntmaior++;
			somamaior += n1;
			
		}
		
	}
	
	mediapar = somapar/qntpar;
	mediamaior = somamaior/qntmaior;
	
	printf("a) a soma dos numeros lidos: %d\n", soma);
	printf("b) o maior numero lido: %d\n", maior);
	printf("c) o menor numero lido: %d\n", menor);
	printf("d) a media dos numeros pares: %0.2f\n", mediapar);
	printf("e) a media dos numeros maiores que 20: %0.2f\n", mediamaior);
	printf("f) a quantidade de numeros pares lidos: %d\n", qntpar);
	printf("g) a soma dos numeros impares lidos: %d", somaimpar);
	
}
