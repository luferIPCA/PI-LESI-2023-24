/*****************************************************************//**
 * @file   Source.c
 * @brief  Manipulação de Structs e Enumerados
 * 
 * @author lufer
 * @date   October 2023
 *********************************************************************/

#include "Dados.h"
#include <stdio.h>

int main() {

	struct Pessoa x;
	Gente y;

	x.idade = 12;
	x.nc = 1234456;
	strcpy(x.nome, "Ola");
	//x.nome = "Ola";		ERRADO

	printf("Nome: %s", x.nome);

}
