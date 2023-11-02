
#include "Dados.h"

SomaProd SomaProduto(int x, int y){
	SomaProd aux;
	aux.prod = x * y;
	aux.soma = x + y;
	return aux;
}


int Soma(int x, int y) {
	int aux;
	aux = x + y;
	return aux;
}

/// @brief Maior de array de inteiros
/// @param valores 
/// @param t 
/// @return 
int MaiorValorArray(int valores[], int t) {
	int maior = valores[0];
	for (int i = 1; i < t; i++) {
		if (valores[i] > maior)
			maior = valores[i];
	}
	return maior;
}

/// @brief 
/// @param turma 
/// @param t 
/// @return 
Pessoa MaisVelho(Pessoa turma[], int t) {
	Pessoa maisVelha = turma[0];
	for (int i = 1; i < t; i++) {
		if (turma[i].idade==-1) break;
		if (turma[i].idade > maisVelha.idade) maisVelha = turma[i];
	}
	return maisVelha;
}


/**
 * @brief .
 * 
 * @param turma
 * @param t
 * @return 
 * @author lufer
 *
 */
bool InicializaTurma(Pessoa turma[], int t) {
	for (int i = 0; i < t; i++)
		turma[i].idade = -1;
	return true;
}


bool OrdenaValores(int v[], int t) {
	for (int i = 0; i < t - 1;i++)
		for (int j = i + 1; j < t; j++) {
			if (v[i] > v[j]) {
				int t = v[i];
				v[i] = v[j];
				v[j] = t;
			}
		}
	return true;
}

bool OrdenarTurmaIdade(Pessoa turma[], int t) {
	for(int i=0;i<t-1; i++)
		for (int j = i + 1; j < t; j++) {
			if (turma[i].idade > turma[j].idade) {
				Pessoa t = turma[i];
				turma[i] = turma[j];
				turma[j] = t;
			}
		}
	return true;
}

/// @brief 
/// @param t 
/// @param tam 
/// @param nome 
/// @return 
bool ExistePessoa(Pessoa t[], int tam, char nome[]) {
	{
		for (int i = 0; i < tam; i++) {
			if (strcmp(t[i].nome, nome) == 0) 
				return true;
		}
		return false;
	}
}

/// @brief Verifica se determinada nome existe na turma
/// @param t	turma
/// @param tam	numero de elementos na turma
/// @param nome	nome da pessoa a procurar
/// @return		true ou false
bool ExistePessoaII(Pessoa t[], int tam, char nome[]) {
	{
		int i;
		for (i = 0; i < tam; i++) {
			if (strcmp(t[i].nome, nome) == 0)
				break;
		}
		if (i < tam) return true;
		return false;
	}
}

//bool InserePessoaTurma(Pessoa turma[], int tam, char nome[], int idade) {
//	Pessoa aux;
//	strcpy(aux.nome,nome);
//	aux.idade = idade;
//}

bool InserePessoaTurma(Pessoa turma[], int tam, Pessoa nova) {
	for (int i = 0; i < tam; i++) {
		if (turma[i].idade == -1) {
			turma[i] = nova;
			return true;
		}
	}
	return false;
}


bool InicializaTurmaII(Pessoa turma[], int t, Pessoa p) {
	if (t < 0) return false;
	for (int i = 0; i < t; i++) {
		turma[i] = p;
	}
	return true;
}

/// @brief Insere nova pessoa; Incrementa total de existentes
/// @param turma 
/// @param tam 
/// @param totalExistem 
/// @param nova 
/// @return 
int InserePessoaTurmaII(Pessoa turma[], int tam, int totalExistem, Pessoa nova) {
	if (totalExistem == tam) return false;
	for (int i = 0; i < tam; i++) {
		if (turma[i].idade == -1) {
			turma[i] = nova;
			return totalExistem +1;
		}
	}
	return tam;
}

