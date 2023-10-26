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

struct Pessoa {
	char nome[N];
	int idade;
	long nc;
} ;
typedef struct Pessoa Gente;

//ou
//typedef struct Pessoa {
//	char nome[N];
//	int idade;
//	long nc;
//} Gente;


