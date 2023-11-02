/*****************************************************************//**
 * @file   IO.c
 * @brief  Suporta metodos de input/output
 * 
 * @author lufer
 * @date   October 2023
 *********************************************************************/

#include "Dados.h"

void MostraPessoaEcra(Pessoa g){
	//printf("Ficha de Pessoa: \n\tNome: %s\n\tIdade:%d\n\tNC: %l\n", g.nome, g.idade, g.nc);
	printf("--- Ficha de Pessoa ---\n");
	printf("\tNome: %s\n", g.nome);
	printf("\tIdade:%d\n", g.idade);
	printf("\tNC: %d\n", g.nc);
}

void MostraTurmaEcra(Pessoa turma[], int t) {
	for (int i = 0; i < t; i++) {
		if (turma[i].idade == -1) break;
		MostraPessoaEcra(turma[i]);
	}
}
