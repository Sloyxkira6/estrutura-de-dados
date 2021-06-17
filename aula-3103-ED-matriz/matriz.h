
typedef struct Matriz* PMatriz;

PMatriz mat_cria(int m, int n);
void mat_libera (Matriz* mat);
float mat_acessa (Matriz* mat, int i, int j);
void mat_atribui (Matriz* mat, int i, int j, float v) ;
int mat_linha (Matriz* mat);
int mat_colunas (Matriz* mat);



#ifndef matriz_c
	#define matriz_c
	#include "matriz.c"
#endef
