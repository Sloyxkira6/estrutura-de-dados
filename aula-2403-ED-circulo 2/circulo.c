#define PI 3.14159

/* Estruturas dispon�veis*/

struct circulo{
	PPonto p;
	float r;
};

/* Fun��o cria
** Aloca e retorna um circulo com centro em (x,y) e raio r.
*/

PCirculo circ_cria(float x, float y, float raio){
	PCirculo c = (PCirculo)malloc(sizeof(Circulo));
	
	c->p=pto_cria(x,y);
	c->r=raio;
	
	return c;
}

/* Fun��o libera
** Libera a mem�ria de um c�rulo previamente criado.
*/

void circ_libera(PCirculo c){
	free(c->p);
	free(c);
}

/* �rea
** Retorna a �rea de um c�rculo.
*/

float circ_area(PCirculo c)

{
	return PI*c->r*c->r;
}

/* Fun��o interior
** Retorna o inteiro 1 se o ponto 'p' est� interno ao c�rculo 'c'.
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
