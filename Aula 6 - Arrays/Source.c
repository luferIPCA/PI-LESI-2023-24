/*
* lufer
* data
* email
* Desc:
*	Arrays
*	Ciclos
*/

#include <stdio.h>
#include "Header.h"
#include "Global.h"


#pragma warning (disable:4996)

int main() {

#pragma region Arrays

	int notas[] = { 12,23,12,10,45 };

	int aux = ProcuraValorArray(notas, 5, 10);	//rever com "sizeof"

	aux = ProcuraPosicaoValorArray(notas, 5, 10);
	if (aux != -1) {
		printf("Existe na posicao %d\n", aux);
	}
	else
		printf("Não Existe!\n");



	printf("Array Original:\n");
	MostraArray(notas, 5);

	aux = OrdenaArray(notas, 5);

	printf("Array Ordenado:\n");
	MostraArray(notas, 5);

	//TPC: Quantos valores existem num array
	//TPC: Procurar mas começando pelo fim!!!!!!

#pragma endregion


}





