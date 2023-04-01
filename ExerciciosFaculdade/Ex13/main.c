#include <stdio.h>
#include <stdlib.h>

/* 
Faça um programa que leia a matricula e o sexo de um aluno.
Obs: o programa deve validar o sexo do aluno. Aceitar letra e numeros para identificar o sexo.
Ao final do cadastro, mostre os dados do aluno e a quantidade de cada tipo.
Obs: utilize a estrutura FOR para validar o sexo.
 */

main() {
	
	int i, matricula, contf = 0, contm = 0, sx;
	
	for(i=0 ; i<5; i++) {
		printf("Digite a matricula: ");
		scanf("%d", &matricula);
		
		printf("Digite:  \n1 para masculino \n2 para feminino: \n");
		scanf("%d", &sx);
		
		if(sx == 1) {
			contm++;
			
		} 
		
		if(sx == 2) {
			contf++;
			
		}
	
	}
	
	printf("Quantidade de homens foram: %d\n", contm);
	printf("Quantidade de mulheres foram: %d", contf);
	
}
