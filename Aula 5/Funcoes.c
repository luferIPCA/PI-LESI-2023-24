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

/// @brief Procedimento
/// @param x 
void Escreve(int x) {
	printf("Valor de X : %d\n", x);
	//Outro metodo!!!
}

/// @brief Calcula a soma de...
/// @param a 
/// @param b 
/// @return 
int Soma(int a, int b) {
	return(a + b);
}

/*
*/
void MostraArray(int x[], int tamanho) {

	for (int i = 0; i < tamanho; i++) {
		printf("array[%d]=%d\n", i, x[i]);
	}
}





