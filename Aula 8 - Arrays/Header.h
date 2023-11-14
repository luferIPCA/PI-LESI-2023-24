/*****************************************************************//**
 * @file   Header.h
 * @brief  Operações sobre Arrays
 * 
 * @author lufer
 * @date   November 2022
 *********************************************************************/
#pragma once

#include <stdbool.h>
#define N 5
#define COL 3

void MostraArray(int v[], int n);
void OrdenaArray(int valores[], int n);
bool CopiaArrays(int v1[], int v2[], int size);
void MostraArrayBidi(int valores[][COL], int linhas);
bool Maiusculas(char nome[]);


typedef struct Varios{
	int maior;
	int menor;
	int soma;
	double media;
	int analisados;
}Varios;

Varios CalculaVarios(int valores[], int size);