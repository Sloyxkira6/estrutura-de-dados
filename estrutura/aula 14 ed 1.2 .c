#include <stdio.h>
#include <stdlib.h>


typedef struct ponto 
{
	float y,x ;
} Ponto, *PPonto ;

typedef struct circulo
{
	Ponto p;
	float r;
} Circulo, *PCirculo ;

Circulo* cria_circulo() ;


int main ()
{
	PCirculo c1=cria_circulo();
	
	free(c1) ;
	return 0;
}

Circulo* cria_circulo()
{
	PCirculo c=(PCirculo)malloc(sizeof(Circulo)) ;
	
	scanf("%f %f %f", &c->p.x, &c->p.y, &c->r) ;
	
	printf("Ponto px: %.1f\nPonto py: %.1f \nfloat r: %.1f", c->p.x, c->p.y, c->r) ;
	
	return c ;
}