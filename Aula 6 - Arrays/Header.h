#pragma once
#include "Global.h"


/// @brief Apresenta conteúdo de um array
/// @param a 	Array
/// @param b 	Tamanho
/// @return 
void MostraArray(int x[], int t);
/**
 * @brief Verifica se determinado valor existe num arrqy.
 *
 * @param		- valores array de valores
 * @param tam	- tamanho do array
 * @param valor	- valor a procurar
 * @return		- Sim ou Não
 * @author lufer
 *
 */
int ProcuraValorArray(int valores[], int tam, int valor);

/**
 * @brief Procura posição onde existe determinado valor no array.
 *
 * @param v	- array
 * @param t	- tamanho do array
 * @param v	- valor a procurar
 * @return	- posição
 * @author lufer
 *
 */
int ProcuraPosicaoValorArray(int valores[], int t, int v);

/**
 * @brief Ordena array e devolve successo ou insucesso.
 *
 * @param v	- array
 * @param t	- tamanho
 * @return	- Sucesso/Insucesso
 * @author lufer
 *
 */
bool OrdenaArray(int v[], int t);

//ou
//#ifndef PRINT
//#define PRINT
//void Escreve(int x);
//#endif // !PRINT
//
