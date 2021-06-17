#define PI 3.14159

struct circulo
{
	Ponto* p;
	float r;
};



Circulo* cric_cria(float x, float y, float raio)
{
	Circulo* c = (Circulo*)malloc(sizeof(Circulo))
	
	c->p = pto_cria(x,y);
	c->r = raio;
	
	return c;
}

void circ_libera(Circulo* c)
{
	free(c->p);
	free(c);
}

float circ_area(Circulo* c)
{
	return PI*c->r*c->r;
}

int circ_interior(Circulo* c, Ponto* p)
{
	if(pto_distancia(c->p,p) < c->r)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
