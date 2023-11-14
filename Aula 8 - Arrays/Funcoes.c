/*****************************************************************//**
 * @file   Funcoes.c
 * @brief  Funções auxiliares
 * 
 * @author lufer
 * @date   November 2022
 *********************************************************************/
#include "Header.h"


/// @brief Apresenta no ecran o conteudo de um array
/// @param v Array a mostrar
/// @param n dimensão do array
void MostraArray(int v[], int n){
	for (int i = 0; i < n; i++)
	{
		printf("v[%d]=%d\n", i, v[i]);
	}
}

/// @brief Ordenar array
/// @param valores  Array a ordenar
/// @param n	Dimensão do array
void OrdenaArray(int valores[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (valores[i] > valores[j]) {
				//Trocar
				int t = valores[i];
				valores[i] = valores[j];
				valores[j] = t;
			}
		}
	}
}

bool CopiaArrays(int v1[], int v2[], int size) {
	if (size <= 0) return false;
	for (int i = 0; i < size; i++) {
		v2[i] = v1[i];
	}
	return true;
}

/// @brief Mostra array bidimensional
/// @param valores	array a mostrar
/// @param linhas total de linhas do array
void MostraArrayBidi(int valores[][COL], int linhas) {
	for(int i=0; i<linhas; i++)
		for (int j = 0; j < COL; j++) {
			printf("valores[%d][%d]=%d\n", i, j, valores[i][j]);
		}

}


Varios CalculaVarios(int valores[], int size) {
	Varios aux;

	aux.maior = aux.menor=valores[0];
	aux.soma = 0;
	aux.media = 0;
	aux.analisados = 0;

	for (int i = 0; i < size; i++) {
		aux.analisados++;
		if (valores[i] > aux.maior) aux.maior = valores[i];
		if (valores[i] < aux.menor) aux.menor = valores[i];
		aux.soma += valores[i];
	}
	aux.media = (double)aux.soma / aux.analisados;
	return aux;
}

/**
 * @brief Converte texto em maiusculas.
 * 
 * @param nome	texto a converter
 * @return		texto em maiusculas
 * @author lufer
 *
 */
bool Maiusculas(char nome[]) {
	//testa se array é vazio
	if (nome[0] == '\0') return false;

	//strcmp(nome, "")
	for (int i = 0; nome[i] != '\0'; i++) {
		if (nome[i] >= 'a' && nome[i] <= 'z') {
			nome[i] = nome[i]-32;	//converte em maiuscula
		}
	}
	return true;
}

