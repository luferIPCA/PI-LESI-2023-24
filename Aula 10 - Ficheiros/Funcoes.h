#pragma once

#include <stdio.h>
#include <stdbool.h>

#define DEBUG 1
#define N 50

#pragma warning (disable:4996)

typedef struct Aluno {
	char nome[N];
	int idade;
	double peso;
}Aluno;

typedef struct Pessoa {
	char nome[N];
	int idade;
	char telefone[N];
	int numero;
}Pessoa;

