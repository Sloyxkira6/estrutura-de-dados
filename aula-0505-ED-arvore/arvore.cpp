#include <stdio.h>
#include "arvore.h"

int main()
{
	int escolha ;
	Arv* p;
	char letra = 'c' ;
	 
	printf("1.imprimir arvore\n");
	printf("2.verificar se o dado pertence a arvore\n");
	
	printf("escolha uma das opcoes a cima:\n") ;
	scanf("%d", &escolha) ;
	
	p = arv_criavazia();
	arv_cria(letra, NULL, NULL);
	
	p = arv_cria('A', 
				arv_cria('B',
						 arv_criavazia(),
						 arv_cria('D',
						 		 arv_criavazia(),
								 arv_criavazia()
								 )
							 ),
				arv_cria('C',
						arv_cria('E',
								arv_criavazia(),
								arv_criavazia()
								),
						arv_cria('F',
								arv_criavazia(),
								arv_criavazia()
								)
							)
						) ;
	 
	if(escolha==1);
	{
		
		arv_imprime(p) ;
	}
	if(escolha==2)
	{
		arv_pertence(p, letra) ;
	}

	arv_libera(p);
	
	return 0 ;
}
