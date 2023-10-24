/*
* lufer
* lufer@ipca.pt
* data
* Implementa��o de cada uma das fun��es de uma calculadora
* ...
*/

#include "Global.h"

#pragma region ADI��ES

/*
* Soma: Calcula a soma de dois valores inteiros
*/
int Soma(int x, int y) {
	int r;				//vari�vel para conter o resultado da opera��o
	r = x + y;
	return (r);
}

/**
 * @brief Calcula o maior entre dois valores inteiros.
 * 
 * @param x
 * @param y
 * @return 
 * @author lufer
 *
 */
int Maior(int x, int y) {
	if (x > y) return x;
	else
		return y;
}

/*
Calcula o maior de tr�s numeros
7	-1	12
a	b	c
*/
int MaiorTresValores(int a, int b, int c) {

	if (a > b)
	{
		if (a > c) 
			return a;
		else					//a <= c
		{
			return c;
		}
	}
	else						//a<=b
	{
		if (b > c)
			return b;
		else
			return c;
	}

}

#pragma endregion



