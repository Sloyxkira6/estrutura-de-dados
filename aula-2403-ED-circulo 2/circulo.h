/* TAD: Círculo. */

/* Dependência de Módulos*/

#include <stdlib.h>
#include "ponto.h"

/* Tipos exportados*/

typedef struct circulo Circulo;
typedef Circulo* PCirculo;

/* Funções exportadas*/

/* Função cria
** Aloca e retorna um circulo com centro em (x,y) e raio r.
*/

PCirculo circ_cria(float x, float y, float raio);

/* Função libera
** Libera a memória de um círulo previamente criado.
*/

void circ_libera(PCirculo c);

/* Área
** Retorna a área de um círculo.
*/

float circ_area(PCirculo c);

/* Função interior
** Retorna o inteiro 1 se o ponto 'p' está interno ao círculo 'c'.
*/

int circ_interior(PCirculo c, PPonto  p);

/* Implementação dos protótipos. */

#ifndef circulo_c
	#define circulo_c
	#include "circulo.c"
#endif
