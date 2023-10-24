/*
* lufer
* lufer@ipca.pt
* data
* Implementação de cada uma das funções de uma calculadora
* ...
*/

#include "Global.h"

#pragma region ADIÇÔES

/*
* Soma: Calcula a soma de dois valores inteiros
*/
int Soma(int x, int y) {
	int r;				//variável para conter o resultado da operação
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
Calcula o maior de três numeros
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



