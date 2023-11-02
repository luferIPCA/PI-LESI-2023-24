/*****************************************************************//**
 * @file   Source.c
 * @brief  Manipulação de Structs e Enumerados
 * 
 * @author lufer
 * @date   October 2023
 *********************************************************************/

#include "Dados.h"
#include <stdio.h>

int main() {

	#pragma region UM

	struct Pessoa x;
	Pessoa y;

	x.idade = 12;
	x.nc = 1234456;
	strcpy(x.nome, "Ola");
	//x.nome = "Ola";		ERRADO

	printf("Nome: %s", x.nome);

	#pragma endregion

#pragma region DOIS

	struct SomaProd sp;
	sp.prod = 12;
	sp.soma = 13;
	printf("Soma: %d\n", sp.soma);
	
	SomaProd z;
	z = SomaProduto(2, 3);

	printf("Soma: %d - Produto: %d\n", z.soma, z.prod);

#pragma endregion

#pragma region TRES

	Pessoa g1;
	g1.nc = 12345678;
	g1.idade = 12;
	//g1.nome = "Manuel";		//ERRO
	strcpy(g1.nome, "Manuel");

	MostraPessoaEcra(g1);

	Pessoa turma[ALUNOSTURMA];// = { {"Maria",12345,12}, {"Paulo", 23, 34}, {"Joaquim",22,34} };
	
	//inicializa turma
	Pessoa ficticia = { "",-1,0 };
	InicializaTurmaII(turma, ALUNOSTURMA, ficticia);


	//InicializaTurma(turma, ALUNOSTURMA);

	//turma[0].idade = 12;
	//turma[0].nc = 123456;
	//strcpy(turma[0].nome, "Paula");
	//MostraPessoaEcra(turma[0]);


	int valores[] = { 23,-2,34,7,123 };
	printf("Maior: %d\n", MaiorValorArray(valores, 5));

	Pessoa aux = MaisVelho(turma, ALUNOSTURMA);
	printf("Nome da Pessoa Mais Velha: %s\n", aux.nome);

	printf("ANTES\n");
	MostraTurmaEcra(turma, 3);

	OrdenarTurmaIdade(turma, 3);

	printf("DEPOIS\n");
	MostraTurmaEcra(turma, 3);


	//TPC
	//REVER TUDO!!!

	//Quantas pessoas mais velhas que N
	//Onde está a pessoa chamada "Maria"
	//Quantas "Marias" existem?

	printf("Existe Maria na Turma: %d\n", ExistePessoa(turma, 3, "Maria"));

	int totalAlunos=3;

	totalAlunos = InserePessoaTurmaII(turma, ALUNOSTURMA, totalAlunos, aux);

#pragma endregion
}
