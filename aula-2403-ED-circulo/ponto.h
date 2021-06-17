/*TAD: ponto(x,y)*/

/*tipo exportado*/
typedef struct ponto Ponto ;

/*fun��es exportadas*/

/*fun��o cria*/
//alocar e retorna umm ponto com coordenadas (x, y)
	
Ponto* pto_cria(float x, float y);

/*fun��o libera*/
/*libera a memoria de um ponto previamente criado*/

void pto_libera(Ponto* p);

/*fun��o acessa*/
/*retorna os valores das coordenadas de um ponto*/

void pto_acessa (Ponto* p, float* x, float* y);

/*fun��o atribui*/
/*atribui novos valores as coordenas de um ponto*/

void pto_atribui(Ponto* p, float x, float y);

/*fun��o distancia*/
/*retorna a distancia entre dois pontos*/

float pto_distancia(Ponto* p1, Ponto* p2);

#include "ponto.c"
