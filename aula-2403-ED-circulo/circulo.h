/* TAD: Circulo */

/* Dependencia de modulos */
#include "ponto.h"

/* Tipo exportado */
typedef struct circulo Circulo;
typedef Circulo* ;

/* Funções exportadas */

/* Função cria */
/* aloca e retorna um circulo com centro (x,y) e raio r*/

Circulo* circ_cria (float x, float y, float raio);

/* Função libera*/
/* Libera a memoria de um circulo previamente criado*/

void circ_libera (Circulo* c);

/* Função area*/
/* Libera a memoria de um circulo previamente criado */

float circ_area (Circulo* c) ;

/*função interior
/*verifica se um dado ponto p esta dentro do circulo*/

int circ_interior (Circulo* c, Ponto* p) ;
