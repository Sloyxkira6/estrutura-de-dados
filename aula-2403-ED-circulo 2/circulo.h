/* TAD: C�rculo. */

/* Depend�ncia de M�dulos*/

#include <stdlib.h>
#include "ponto.h"

/* Tipos exportados*/

typedef struct circulo Circulo;
typedef Circulo* PCirculo;

/* Fun��es exportadas*/

/* Fun��o cria
** Aloca e retorna um circulo com centro em (x,y) e raio r.
*/

PCirculo circ_cria(float x, float y, float raio);

/* Fun��o libera
** Libera a mem�ria de um c�rulo previamente criado.
*/

void circ_libera(PCirculo c);

/* �rea
** Retorna a �rea de um c�rculo.
*/

float circ_area(PCirculo c);

/* Fun��o interior
** Retorna o inteiro 1 se o ponto 'p' est� interno ao c�rculo 'c'.
*/

int circ_interior(PCirculo c, PPonto  p);

/* Implementa��o dos prot�tipos. */

#ifndef circulo_c
	#define circulo_c
	#include "circulo.c"
#endif
