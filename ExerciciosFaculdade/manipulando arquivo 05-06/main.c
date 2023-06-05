#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	
  FILE *pont_arq;
  char frase[50];
  int i = 0;
  int tamanho;

	printf("Menu Principal\n");
	printf("\n1. Criar arquivo txt\n");
	printf("2. Escrever conteudo no arquivo txt\n");
	printf("3. Ler e imprimir o conteudo do arquivo txt\n");
	printf("4. Sair do programa\n");
	scanf("%d", &i);
	
	while(i != 4) {
		switch(i) {
			case 1:
				pont_arq = fopen("arquivo.txt", "a");
				printf("Arquivo criado com sucesso! \n");
				if(pont_arq == NULL) {
					printf("Erro na abertura do arquivo");
					
				}
				printf("\nMenu Principal\n");
				printf("\n1. Criar arquivo txt\n");
				printf("2. Escrever conteudo no arquivo txt\n");
				printf("3. Ler e imprimir o conteudo do arquivo txt\n");
				printf("4. Sair do programa\n");
				scanf("%d", &i);
				
			break;
			
			case 2:
				pont_arq = fopen("arquivo.txt", "w");
				printf("\nDigite a frase a ser guardada no arquivo: ");
				scanf("%s", &frase);
				tamanho = strlen(frase);
				int cnt;
				for(cnt = 0; cnt < tamanho; cnt++) {
					fputc(frase[cnt], pont_arq);
					
				}
				fclose(pont_arq);
				printf("Arquivo gravado com sucesso! \n");
				printf("\nMenu Principal\n");
				printf("\n1. Criar arquivo txt\n");
				printf("2. Escrever conteudo no arquivo txt\n");
				printf("3. Ler e imprimir o conteudo do arquivo txt\n");
				printf("4. Sair do programa\n");
				scanf("%d", &i);
				break;
				
			case 3:
				pont_arq = fopen("arquivo.txt", "r");
				while(fgets(frase, 50, pont_arq) != NULL) {
					printf("Leitura: \n%s\n", frase);
					fclose(pont_arq);
				}
				printf("\nMenu Principal\n");
				printf("\n1. Criar arquivo txt\n");
				printf("2. Escrever conteudo no arquivo txt\n");
				printf("3. Ler e imprimir o conteudo do arquivo txt\n");
				printf("4. Sair do programa\n");
				scanf("%d", &i);
				break;
					
		}
	}

  return(0);
}
