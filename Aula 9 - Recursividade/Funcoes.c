
#include "Header.h"

int x=12;

int IncrementaValor(){
	static int x = 0;
	x++;
	return x;
}

int IncrementaValorRec() {
	static int x = 0;		//mantem-se!
	int y=x;				//desaparece!
	x++;
	y++;
	if(x<LIMITE) return (IncrementaValorRec());
	return (x);
}

/// @brief Factorial não recursiva!!! Perguntar ao Mr ChatGPT
/// @param n 
/// @return 
//int Factorial(int n) {
//
//	for (int i = 0; i < ; i++) {
//
//	}
//}

int FactorialRec(int n) {
	if (n == 0) return 1;
	return (n * FactorialRec(n - 1));
}

int SomaNVezesNaoRec(int valorASomar, int valorMaximoCalculado) {
	int soma = valorASomar;
	for (int j = 0; ; j++) {
		soma+= valorASomar;
		if (soma >= valorMaximoCalculado) break;
	}
	return soma- valorASomar;
}

/**
 * @brief ANALISAR.
 * 
 * @param valorASomar
 * @param maxValorSomado
 * @return 
 * @author lufer
 *
 */
int SomaNVezesRec(const int valorASomar, int maxValorSomado) {
	static int soma = 0;
	if (soma >= maxValorSomado) return soma;
	soma = valorASomar + SomaNVezesRec(valorASomar, maxValorSomado);
}

/**
 * @brief ANALISAR!
 * 
 * @param valorASomar
 * @param maxValorSomado
 * @return 
 * @author lufer
 *
 */
int SomaNVezesRec(int valorASomar, int aux, int maxValorSomado) {
	if (aux <= maxValorSomado)
	{
		aux += valorASomar;
		return (SomaNVezesRec(valorASomar, aux, maxValorSomado));
	}
	else
		return valorASomar;
}
	
//Somar(7, 100);
/*
*	valor=14;
*	Somar(14,100)
*		valor
*/





