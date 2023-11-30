

/**
 * Gerir ficheiros de dados em CSV.
 * lufer
 * email
 */


#include <stdio.h>
#include <stdbool.h>
#include "Funcoes.h"

#pragma warning (disable:4996)

/**
* carrega dados de um ficheiro de texto
 * Devolve o numero de alunos lido.
 * Devolve o array com os dados dos alunos lidos
 */
int ImportarDados(char fileName[], Aluno dadosCSV[]) {
	FILE *fp = fopen(fileName, "r");
	if (fp == NULL) return 0;
	int i = 0;
	while (1) {
		//ATENÇÂO À PRIMEIRO LINHA DO CSV!!!
		fscanf(fp, "%[^;];%d;%lf", dadosCSV[i].nome, &dadosCSV[i].idade, &dadosCSV[i].peso);
		if (feof(fp)) break;
		if (DEBUG)
			printf("Nome: %s - Idade: %d - Peso: %lf\n", dadosCSV[i].nome, dadosCSV[i].idade, dadosCSV[i].peso);
		i++;
	}
	fclose(fp);
	return i;
}

bool ExportaDados(char fileName[], Aluno dadosCSV[], int n) {
	FILE* fp = fopen(fileName, "w");
	if (fp == NULL) return false;
	//fprintf(fp, "Nome;Idade;Peso");	//para gerar a 1ª linha
	for(int i=0; i<n; i++){
		//ATENÇÂO À PRIMEIRO LINHA DO CSV!!!
		fprintf(fp, "%s;%d;%lf", dadosCSV[i].nome, dadosCSV[i].idade, dadosCSV[i].peso);
	}
	fclose(fp);
	return true;
}

/// @brief Proposta solução alínea 1 do Trabalho Prático
/// @param nomeFiceiro 
/// @param pacientes 
/// @param maximoPacientes 
/// @return 
int ImportarPacientes(char nomeFiceiro[], Pessoa pacientes[], int maximoPacientes) {
	FILE* fp = fopen(nomeFiceiro, "r");
	int i = 0;
	while (1 && i<maximoPacientes) {
		fscanf(fp, "%d;%[^;];%s", &pacientes[i].numero, pacientes[i].nome, pacientes[i].telefone);
		i++;
		if (feof(fp)) break;
	}
	fclose(fp);
	return i;
}

/// @brief Inicializa array de pacientes
/// @param pacientes 
/// @param n 
/// @return 
bool InicializaPacientes(Pessoa pacientes[], int n) {
	if (n <= 0) return false;

	for (int i = 0; i < n; i++)
		pacientes[i].numero = -1;

	return true;
}









