#define PI 3.14159

/* Estruturas disponíveis*/

struct circulo{
	PPonto p;
	float r;
};

/* Função cria
** Aloca e retorna um circulo com centro em (x,y) e raio r.
*/

PCirculo circ_cria(float x, float y, float raio){
	PCirculo c = (PCirculo)malloc(sizeof(Circulo));
	
	c->p=pto_cria(x,y);
	c->r=raio;
	
	return c;
}

/* Função libera
** Libera a memória de um círulo previamente criado.
*/

void circ_libera(PCirculo c){
	free(c->p);
	free(c);
}

/* Área
** Retorna a área de um círculo.
*/

float circ_area(PCirculo c)

{
	return PI*c->r*c->r;
}

/* Função interior
** Retorna o inteiro 1 se o ponto 'p' está interno ao círculo 'c'.
*/

int circ_interior(PCirculo c, PPonto p)
{
	if (pto_distancia(c->p,p) < c->r)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
