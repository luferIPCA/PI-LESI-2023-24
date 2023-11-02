/*
* lufer
* email
* 
**/
#pragma once

//Lidar com Booleanos
//h1
//Usar definições existentes 
#include <stdbool.h>

//ou
//Definir com #define
//#define bool int;
//#define TRUE 0
//#define FALSE !TRUE

//ou
// definir com typedef
//typedef enum { false, true } bool;

#define N 25
#define ALUNOSTURMA 20

struct Pessoa {
	char nome[N];
	int idade;
	long nc;
};
typedef struct Pessoa Pessoa;

//ou
//typedef struct Pessoa {
//	char nome[N];
//	int idade;
//	long nc;
//} Gente;



//struct SomaProd {
//	int soma;
//	int prod;
//};
//
//typedef struct SomaProd SomaProd;
// 
//ou
typedef struct SomaProd {
	int soma;
	int prod;
} SomaProd;

/// @brief Calcula a soma e o produto de dois valores inteiros
/// @param x 
/// @param y 
/// @return 
SomaProd SomaProduto(int x, int y);
int MaiorValorArray(int valores[], int t);
Pessoa MaisVelho(Pessoa turma[], int t);
bool InicializaTurma(Pessoa turma[], int t);
void MostraTurmaEcra(Pessoa turma[], int t);
bool OrdenarTurmaIdade(Pessoa turma[], int t);
bool ExistePessoa(Pessoa t[], int tam, char nome[]);
bool InicializaTurmaII(Pessoa turma[], int t, Pessoa p);
int InserePessoaTurmaII(Pessoa turma[], int tam, int totalExistem, Pessoa nova);

void MostraPessoaEcra(Pessoa g);
