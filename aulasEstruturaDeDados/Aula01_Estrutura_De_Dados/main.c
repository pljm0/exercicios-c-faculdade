#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	struct cadastro_aluno {		
		char nome[50];
		char matricula[10];
		char email[30];
		char disciplina[30];
		char telefone[15];
		float notaProva1;
		float notaProva2;
		
	}; 
	struct cadastro_aluno aluno;
	
	struct cadastro_professor {
		char nome[50];
		char matricula[15];
		char endereco[50];
		char cpf[15];
		
	};
	struct cadastro_professor professor;
	
	printf("Cadastro de aluno\n");
	printf("\nInforme o nome do aluno: \n");
	fflush(stdin);
	
	fgets(aluno.nome, 50, stdin);
	
	printf("\nInforme a matricula do aluno: \n");
	fflush(stdin);
	
	fgets(aluno.matricula, 10, stdin);
	
	printf("\nInforme o nome da disciplina: \n");
	fflush(stdin);
	
	fgets(aluno.disciplina, 30, stdin);
	
	printf("\nInforme o email: \n");
	fflush(stdin);
	
	fgets(aluno.email, 30, stdin);
	
	printf("\nInforme o numero de telefone: \n");
	fflush(stdin);
	
	fgets(aluno.telefone, 15, stdin);
	
	printf("\nInforme a nota da Prova 1: \n");
	scanf("%f", &aluno.notaProva1);
	fflush(stdin);
	
	printf("\nInforme a nota da Prova 2: \n");
	scanf("%f", &aluno.notaProva2);
	
	printf("\nCadastro de professor\n");
	printf("\nInforme o nome do professor: \n");
	fflush(stdin);
	
	fgets(professor.nome, 50, stdin);
	
	printf("\nInforme a matricula do professor: \n");
	fflush(stdin);
	
	fgets(professor.matricula, 15, stdin);
	
	printf("\nInforme o endereco do professor: \n");
	fflush(stdin);
	
	fgets(professor.endereco, 50, stdin);
	
	printf("\nInforme o CPF do professor: \n");
	fflush(stdin);
	
	fgets(professor.cpf, 15, stdin);
	
	printf("\nDados cadastrados do aluno: \n");
	
	printf("\nNome: %s\n", aluno.nome);
	printf("Matricula: %s", aluno.matricula);
	printf("Disciplina: %s", aluno.disciplina);
	printf("Email: %s", aluno.email);
	printf("Telefone: %s", aluno.telefone);
	printf("\nNota Prova 1: %.2f", aluno.notaProva1);
	printf("\nNota Prova 2: %.2f\n", aluno.notaProva2);
	
	printf("\nDados cadastrados do professor: \n");
	
	printf("\nNome: %s", professor.nome);
	printf("Matricula: %s", professor.matricula);
	printf("Endereco: %s", professor.endereco);
	printf("CPF: %s", professor.cpf);
	
	return 0;
}
