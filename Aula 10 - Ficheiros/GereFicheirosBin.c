

#include "Funcoes.h"

/**
 * @brief Guarda dados num ficheiro binário.
 *
 * @param fileName
 * @param dadosCSV
 * @param n
 * @return
 * @author lufer
 *
 */
bool GuardaDados(char fileName[], Aluno dadosCSV[], int n) {
	FILE* fp = fopen(fileName, "wb");
	if (fp == NULL) return false;
	for (int i = 0; i < n; i++) {
		fwrite(&dadosCSV[i], 1, sizeof(Aluno), fp);
	}
	fclose(fp);
}

/**
 * @brief carrega dados de um ficheiro binario.
 * 
 * @param fileName
 * @param dadosCSV
 * @return 
 * @author lufer
 *
 */
int LerDados(char fileName[], Aluno dadosCSV[]) {
	FILE* fp = fopen(fileName, "rb");
	if (fp == NULL) return 0;
	int i = 0;
	while (fread(&dadosCSV[0], 1, sizeof(Aluno), fp)) {
		i++;
	}
	fclose(fp);
	return i;

}
