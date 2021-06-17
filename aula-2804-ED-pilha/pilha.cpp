#include <stdio.h>
#include "pilha.h"

int main()
{
	
	int escolha ;
	float valor ;
	Pilha* p ;
	
	printf("1.push na pilha\n");
	printf("2.pop na pilha\n");
	printf("3.imprime a pilha\n");

	p = pilha_cria();
	pilha_vazia(p);
	
	printf("escolha uma das opcoes a cima") ;
	scanf("%d", &escolha) ;
	
	if(escolha==1);
	{
		printf("passe o valor para a função");
		scanf("%f", &valor);
		pilha_push( p, valor);	
	}
	if(escolha==2)
	{
		pilha_pop(p) ;
	}
	if(escolha==3)
	{
		pilha_imprime(p) ;
	}
	
	pilha_libera( p);
	
	return 0 ;
}
