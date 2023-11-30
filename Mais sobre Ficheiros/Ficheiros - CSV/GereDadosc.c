/*****************************************************************//**
 * @file   GereDadosc.c
 * @brief  
 * 
 * @author lufer
 * @date   December 2022
 * ver: https://copyprogramming.com/howto/using-fscanf-to-read-from-a-csv-file-in-c
 *********************************************************************/

#include "Var.h"
#pragma warning (disable: 4996)

bool LeDadosCSV(char fileName[] )
{
    char row[MAXCHAR];
    FILE* fp = fopen(fileName, "r");
    if (fp == NULL) {
        perror("Problemas na leitura do ficheiro");
        return false;
    }

    while (feof(fp) != true)
    {
        fgets(row, MAXCHAR, fp);
        printf("Row: %s", row);
    }

    fclose(fp);
    return true;
}
