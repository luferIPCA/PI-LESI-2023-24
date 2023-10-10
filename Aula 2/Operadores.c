/*
* lufer
* lufer@ipca.pt
* 02-10-2023
* 
* Manipular varíaveis e operadores em C
* Input/Output
* 
* UC: PI
* IM
*/


#include <stdio.h>

/*
* Função principal
* Demonstra uso de variáveis
* lufer
* 02-10-2023
*/
int main() {
	//corpo da função

	//declarar variáveis
	int x;
	int idade;

	double media;
	char c;	//EXEMPLOS: 'a' '0' '1'|= 1

	//inicializar varíaveis
	x = 12;
	idade = x * 2;
	media = 0.0;
	c = '0';
	x = '0';
	x = 'P';
	c = 80;

	printf("O valor de X= %d e de C=%c\n", x,c);
	printf("Idade=%d\n", idade);
	printf("Media: %0.2f\n", media);

	puts("Valor de X:");	//mesmo que printf("Valor de X:");
	scanf_s("%d", &x);
	printf("Novo valor de X=%d\n", x);


	//Operadores
	//Logicos: True ou False
	//se X for maior que zero, decrementa 1
	if (x > 0) {
		x = x - 1;
		//x--;
		//x -= 1;
	}

	//se X for maior que zero e não é 4, decrementa 1
	if ((x > 0) && (x != 4)) {
		x--;
	}

	//se X for maior que zero e é 4, decrementa 1, senão incrementa 2
	if ((x > 0) && (x == 4)) {
		x--;
	}
	  {		//x<=0 ou x!=4
		x = x - 2;
		//x -= 2;
	}

	//------input/Output-----
	/*
	* printf/scanf
	* 
	* gets/puts
	* 
	* fprintf/fscanf
	* 
	* fgets/fputs
	* 
	* fwrite/fread
	* 
	* stdio, stdin, stdprn, stderr
	* 
	*/

	//Exemplos
	//putchar(7);
	//putchar(230);
	//putchar(191);

}










