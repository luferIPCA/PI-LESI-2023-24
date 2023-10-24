/*
* lufer
* email
* data
* desc
* versao
**/

#include "Global.h"
#include <stdio.h>
#include <stdbool.h>


void MostraArray(int x[], int tamanho) {

	for (int i = 0; i < tamanho; i++) {
		printf("array[%d]=%d\n", i, x[i]);
	}
}

/**
 * @brief Verifica se determinado valor existe num arrqy.
 * 
 * @param		- valores array de valores
 * @param tam	- tamanho do array
 * @param valor	- valor a procurar
 * @return		- Sim ou Não
 * @author lufer
 *
 */
int ProcuraValorArray(int valores[], int tam, int valor) {

#pragma region WHILE
	int enc = FALSE;
	int i = 0;
	while ((enc == FALSE) && (i<tam)) { //~(a e b) = ~a ou ~b
		if (valores[i] == valor) enc = TRUE;
		else
			i = i + 1;
	}
	return enc;
#pragma endregion

#pragma region FOR

	//int enc = FALSE;
	//int totVezes;
	//for (int i = 0; i < tam; i++) {
	//	if (valores[i] == valor) {
	//		enc = TRUE;
	//		break;				//versus continue
	//		//ou
	//		//return enc;
	//	}
	//	totVezes++;
	//}
	//return enc;

#pragma endregion

#pragma region DO

	/*int enc = FALSE;
	int i = 0;
	do {
		if (valores[i] == valor) {
			enc = TRUE;
		}
		else
			i++;
	} while (enc == FALSE && i<tam);
	return enc;*/

#pragma endregion

}

/**
 * @brief Procura posição onde existe determinado valor no array.
 * 
 * @param v	- array
 * @param t	- tamanho do array
 * @param v	- valor a procurar
 * @return	- posição
 * @author lufer
 *
 */
int ProcuraPosicaoValorArray(int valores[], int t, int v) {

	for (int i = 0; i < t; i++) {
		if (valores[i] == v) return i;
	}
	return -1;
}


/**
 * @brief Ordena array e devolve successo ou insucesso.
 * 
 * @param v	- array
 * @param t	- tamanho
 * @return	- Sucesso/Insucesso
 * @author lufer
 *
 */
bool OrdenaArray(int v[], int t) {
	if (t < 0) return FALSE;
	for(int i=0; i<t-1; i++){
		for (int j = i + 1; j < t; j++)
		{
			if (v[i] > v[j]) { //trocar
				int t = v[i];
				v[i] = v[j];
				v[j] = t;
			}
		}
	}
	return TRUE;
}




