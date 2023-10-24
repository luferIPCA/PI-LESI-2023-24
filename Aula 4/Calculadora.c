/*
* lufer
* lufer@ipca.pt
* data
* Implementação de uma calculadora
* ...
*/

#include "Funcoes.h"
//#include "Circunferencia.h"
#include <stdio.h>

//#pragma warning (disable:4496)


int main() {

	int r = Soma(3, 4);
	printf("Soma= %d\n", r);

	double pi = PI;

	printf("O maior entre %d e %d é %d\n", 2, 3, Maior(2, 3));

	double area = AreaCircunf(12);
	printf("Area: %f\n", area);

	area = AreaCircunf(-23);
	if (area < 0)
		printf("ERRO!!!! valor de raio inválido!!!\n");
	else
		printf("Area: %f\n", area);

	int maior = MaiorTresValores(7, -1, 12);
	printf("Maior: %d\n", maior);


	maior = MaiorTresValores(-7, -1, -12);
	printf("Maior: %d\n", maior);
}





