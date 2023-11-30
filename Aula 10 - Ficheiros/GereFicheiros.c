/*****************************************************************//**
 * @file   GereFicheirosc.cpp
 * @brief  manipulação de ficheiros em C
 * 
 * @author lufer
 * @date   November 2023
 *********************************************************************/

#include <stdio.h>
#include "Funcoes.h"

#pragma warning (disable: 4996)

#define N 40

int main(){
	
	FILE* fp;		//file handler - apontador para ficheiro

#pragma region FICHEIROS_TEXTO
	
	char texto[20];
	//scanf("%s", texto); //REVER SLIDES

	fp = fopen("dados.dat", "w");				//abre ficheiro para escrita
	if (fp == NULL)								//verifica se ficheiros foi criado
		printf("Erro no acesso ao ficheiro..");
	fprintf(fp, "%s\n", "Viva o Benfica II");	//escreve no ficheiro
	fclose(fp);

	fp = fopen("dados.dat", "r");				//abre para leitura

	if (fp == NULL)								//verifica se conseguiu abrir
		printf("Erro no acesso ao ficheiro..");
	fscanf(fp, "%s\n", texto);					//lê
	fclose(fp);

	printf("Lido: %s\n", texto);

#pragma endregion

#pragma region FICHEIRO_CSV

	Pessoa p1 = { "Paulo", 12 };

	fp = fopen("Pessoas.csv", "w");
	if (fp == NULL) return;
	fprintf(fp, "%s;%d\n", p1.nome, p1.idade);
	fclose(fp);

	Pessoa p2;
	fp=fopen("Pessoas.csv", "r");
	if (fp == NULL) return;
	fscanf(fp, "%[^;];%d", p2.nome, &p2.idade);
	fclose(fp);
	printf("Nome: %s - Idade: %d\n", p2.nome, p2.idade);

	//TPC ler de um ficheiro csv vários registos

	fp = fopen("Pessoas2.csv", "r");
	while (1) {
		fscanf(fp, "%[^;];%d", p2.nome, &p2.idade);
		if (feof(fp)) break;
		//printf("Nome: %s - Idade: %d\n", p2.nome, p2.idade);
	}
	fclose(fp);

	//Ler para um array

	Pessoa turma[10];
	fp = fopen("Pacientes.csv", "r");
	int i = 0;
	while (1) {
		fscanf(fp, "%[^;];%d", turma[i].nome, &turma[i].idade);
		i++;
		if (feof(fp)) break;
		//printf("Nome: %s - Idade: %d\n", p2.nome, p2.idade);
	}
	fclose(fp);

#pragma region EXERCICIO_AULA

	Aluno turma3[N];

	int totAlunos = ImportarDados("Pessoas3.csv", turma3);

	bool aux = GuardaDados("Pessoas.dat", turma3, totAlunos);


#pragma endregion

#pragma endregion


#pragma region FICHEIROS_BIN

	//fwrite
	//fread

	printf("TAMANHO PESSOA: %d\n", sizeof(Pessoa));

	Pessoa p3 = { "Pedro",12 };

	fp = fopen("Pessoas.dat", "wb");
	if (fp != NULL) {
		fwrite(&p3, sizeof(Pessoa),1, fp);
	}
	fclose(fp);

	Pessoa p4;

	fp = fopen("Pessoas.dat", "rb");
	if (fp != NULL) {
		fread(&p4, 1, sizeof(Pessoa), fp);
	}
	fclose(fp);

#pragma region ARRAYS

	Pessoa turma4[] = { {"Joao",12},{"Ana",14} };

	fp = fopen("Turma.txt", "wb");
	if (fp != NULL) {
		for (int i = 0; i < 2; i++) {
			fwrite(&turma4[i], 1, sizeof(Pessoa), fp);
		}
	}
	fclose(fp);

	Pessoa turma2[N];
	fp = fopen("Turma.txt", "rb");
	if (fp != NULL) {
		int i = 0;
		/*
			while(1){
				fread(&turma2[i], 1, sizeof(Pessoa), fp);
				if(feof(fp) break;
			}
		*/
		while (fread(&turma2[i], 1, sizeof(Pessoa), fp)) {
			i++;
		}
	}


#pragma endregion

#pragma endregion

}



