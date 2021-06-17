


/*TAD: ponto(x,y)*/
/*tipo exportado*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct ponto Ponto;
typedef Ponto* PPonto;



//fun��es disponiveis
//criar ponto: alocar e retorna umm ponto com coordenadas (x, y)
	
PPonto pto_cria(float x, float y);

/*fun��o libera*/
/*libera a memoria de um ponto previamente criado*/

void pto_libera(PPonto p);

/**fun��o acessa/
/*retorna os valores das coordenadas de um ponto*/

void pto_acessa (PPonto p, float* x, float* y);

/*fun��o atribui*/
/*atribui novos valores as coordenas de um ponto*/

void pto_atribui(PPonto p, float x, float y);

/*fun��o distancia*/
/*retorna a distancia entre dois pontos*/

float pto_distancia(PPonto p1, Ponto* p2);

#ifndef ponto_c
	#define ponto_c
	#include "ponto.c"
#endif
