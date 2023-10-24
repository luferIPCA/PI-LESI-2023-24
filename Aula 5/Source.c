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

#pragma region Um

	int a, b;
	a = 10;
	a++;
	b = 23;


	Escreve(a);		//usar Prodecimento
	//printf("******: %d", a);
	a = Soma(a, b);	//usar uma Função

	b = a + 1;

	printf("a: %d\n", a);


	//array
	int valores[MAX];	//declara arrays de MAX posições
	valores[0] = 12;
	valores[0]++;
	valores[7] = valores[0] * 2;

	#pragma endregion

#pragma region Dois
	//Ciclos

	/*
	do {
		acção
	} while(condicão)
	*/

	/*
	while (condição ){
		acção
	}
	*/

	/*
	for (inicialização; condição; apos_cada_ação) {
		acção
	}
	*/

	printf("valores[0]=%d\n", valores[0]);
	a = 0;
	printf("valores[0]=%d\n", valores[a]);
	a++;
	printf("valores[0]=%d\n", valores[a]);

	
	//for (int i = 0; i < MAX; i++) {
	//	//acção
	//	printf("valores[%d]=%d\n", i,valores[i]);
	//}

	MostraArray(valores, MAX);

	/*int i = 0;
	while (i< MAX) {
		printf("valores[%d]=%d\n", i, valores[i]);
		i++;
	}*/

	/*i = 0;
	do {
		printf("valores[%d]=%d\n", i, valores[i]);
		i++;
	} while (i < MAX);*/

	//break; continue;
	//foreach()	//C#

	//Array of characters

	char aaaa[20];
	aaaa[0] = 'a';
	aaaa[2] = 'b';
	aaaa[20] = 'z';		//ERRO! excede o tamanho do arrray!


	char nomes[] = { "ola" };
	char outro[] = "OK";
	char outro2[10] = { 'o','l','a','\0' };

	for (int i = 0; i < strlen(nomes); i++) {
		printf("%c", nomes[i]);
	}

	printf("%s\n", nomes);


	char letras[40];
	letras[0] = 'a';
	//int n=scanf("%[^\n]", letras);
	//gets(letras);
	//int n = scanf("%[0-9a-zA-Z ]", letras);
	//gets();
	//puts(letras);

#pragma endregion

#pragma region Tres

	int notas[] = { 12,23,12,10,45 };

	int aux = ProcuraValorArray(notas, 5, 10);	//rever com "sizeof"

	aux = ProcuraPosicaoValorArray(notas, 5, 10);
	if (aux != -1) {
		printf("Existe na posicao %d\n", aux);
	}
	else
		printf("Não Existe!\n");

	//TPC: Quantos valores existem num array
	//TPC: Procurar mas começando pelo fim!!!!!!

	aux = OrdenaArray(notas, 5);
	MostraArray(notas, 5);

#pragma endregion


}





