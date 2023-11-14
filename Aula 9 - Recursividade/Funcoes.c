
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
