/*****************************************************************//**
 * @file   Aula.c
 * @brief Ordenação de arrays
 * @author lufer
 * @date   November 2022
 * @obs	   VER: 
 *				https://www.javatpoint.com/c-program-to-copy-all-elements-of-one-array-into-another-array
 *				https://godbolt.org/z/7cPo8T
 *********************************************************************/

#include <stdio.h>
#include "Header.h"
#include <locale.h>	//escrever caracteres portugueses


#define N 5

int main() {

	setlocale(LC_ALL, "Portuguese");	//escrever caracteres portugueses

#pragma region ARRAY_SIMPLES

	//const int N = 5;	//com gcc
	int valores[N] = { 7,0,-1,11,8 };
	int valoresAuxiliar[N];

	//preserva array original
	int size = sizeof(valores) / sizeof(valores[0]);
	CopiaArrays(valores, valoresAuxiliar, size);

#pragma region Codigo_Local
	//Mostra array original
	printf("\nAntes de ordenar\n");
	for (int i = 0; i < N; i++)
		printf("valores[%d]=%d\n", i, valores[i]);

	//Ordena o array
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (valores[i] > valores[j]) {
				//Trocar
				int t = valores[i];
				valores[i] = valores[j];
				valores[j] = t;
			}
		}
	}
	//Mostra o array ordenado
	printf("\nDepois de Ordenar\n");
	for (int i = 0; i < N; i++)
		printf("valores[%d]=%d\n", i, valores[i]);

#pragma endregion

#pragma region USA_FUNÇÔES

	//Repõe array original
	CopiaArrays(valoresAuxiliar, valores, size);
	//Mostra array original
	printf("\nFUNÇÔES: Antes\n");
	MostraArray(valores, size);
	//Ordena array
	OrdenaArray(valores, size);
	//Mostra array ordenado
	printf("\nFunções: Depois\n");
	MostraArray(valores, size);

#pragma endregion

#pragma endregion

#pragma region MULTI
//#define COL 3
	//Array bidimensional
	int v[][COL] = { {1,2,3},{4,5,6},{-1,2,2},{34,23,-2},{-2,34,1} };

	printf("\nANTES: Mostra Array Bidimensional:\n");
	for (int linha = 0; linha < N; linha++)
		for (int col = 0; col < COL; col++) {
			printf("v[%d][%d]=%d\n", linha, col, v[linha][col]);
		}

	MostraArrayBidi(v,N );

	//Calcula o maior valor de um array bidimensional???
	int maior = v[0][0];

	for(int i=0; i<N; i++)
		for (int j = 0; j < COL; j++) {
			if (maior < v[i][j]) 
				maior = v[i][j];
		}
	printf("Maior valor do array: %d\n", maior);

#pragma endregion

#pragma region EXERCICIO

#define LENGTH 5

	//O que acontece neste codigo?

	printf("\nEXERCICIO\n");
	//Inicializa array     
	int arr1[] = { 1, 2, 3, 4, 5 };

	//????    
	int length = sizeof(arr1) / sizeof(arr1[0]);

	//Cria array 2.    
	//int arr2[length];	//with gcc
	int arr2[LENGTH];

	//????    
	for (int i = 0; i < length; i++) {
		arr2[i] = arr1[i];
	}

	//Mostra array 1     
	printf("\nElementos do array original: \n");
	for (int i = 0; i < length; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\n");

	//Mostra array2     
	printf("\nElementos do novo array: \n");
	for (int i = 0; i < length; i++) {
		printf("%d ", arr2[i]);
	}
#pragma endregion

#pragma region EXERCICO_5c_FOLHA_3
	Varios a = CalculaVarios(valores, N);
#pragma endregion

#pragma region EXERCICIO_5b_FOLHA_3

	char str[] = "Viva o Benfica";

	char result[sizeof(str)];
	for (int i = 0; str[i] != '\0'; i++) {
		//result[i] = toupper(str[i]);

		if (str[i] >= 'a' && str[i] <= 'z')
			result[i] = (str[i] - 32);		//A = a+32
		else
			result[i] = str[i];
	}
	result[sizeof(str)-1] = '\0';
	printf("Input string      : %s\n", str);
	printf("Uppercase string  : %s\n", result);

#pragma endregion

#pragma region MAIUSCULAS (Folha_5b_FUNÇÃO)
	char nome[] = "Viva o Braguinha";
	printf("\nMIN: %s\n", nome);
	//char outroNome[40];
	//strcpy(outroNome, "Outro texto");
	//scanf("%s", nome);
	bool aux = Maiusculas(nome);
	if(aux==true)
		printf("MAI: %s\n", nome);
#pragma endregion
}
