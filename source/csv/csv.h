#ifndef _CSV_H_
#define _CSV_H_
#include <stdio.h>

FILE* abrirCSV(char nomeDoArquivo[100]);
int lerString(FILE* arquivo, char* string);
int lerInteiro(FILE* arquivo);
int lerStringFixa(FILE* arquivo, char* string,int tamanho);

#endif