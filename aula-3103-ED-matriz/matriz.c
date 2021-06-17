#include <stdlib.h>
#include <stdio.h>

typedef struct matriz
{
	float** v;
	int lin;
	int col;
	
} Matriz,**PMatriz ;

PMatriz mat_cria(int m, int n)
{
	int i=0;
	int j=0;
	
	
	PMatriz mat=(float**)malloc(n*sizeof(float*)) ;
	
	for(i=0; i<=2; i++)
	{
		for(j=0;j<=2; j++)
		{
			mat->col[i] ;
			mat->lin[j] ;
		}
	}
		
	return mat ;
}
void mat_libera (PMatriz mat)
{
	for(int i=0; i<=2; i++)
	{
		free(mat) ;
		
	}
}
float mat_acessa (PMatriz mat, int i, int j)
{
	for(i=0; i<=2; i++)
	{
		for(j=0; j<=2; j++)
		{
			mat->lin[j] ;
			mat->col[i] ;
		}
	}
}
void mat_atribui(PMatriz mat, int i, int j, float v)
{
	
	for(i=0; i<=2; i++)
	{
		for(l=0; l<=2; l++)
		{
			scanf("%d", mat->lin[j]);
			scanf("%d", mat->col[i]);
		}
	}
}
int mat_linha(PMatriz mat)
{
	
	for(int j=0; j<=2; j++)
	{
		printf("%d", mat->lin[j]) ;
	}	
	
	return 0;
}
int mat_colunas(PMatriz mat)
{
	printf("%d", mat->col) ;
	
	return 0;
}
