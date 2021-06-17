#include <stdio.h>
#include "lista.h"

int main(void)
{
	Lista* l ;				//declara uma lista n�o inicializada
	int escolha, valor;
	
	
	
	
	/*cria o primeiro elemento com o endere�o NULL
	e l recebe esse endere�o*/
	l = lst_cria();			
	
	/*verifica se l � um elemeneto com o endere�o NULL 
	se sim, ele vai retornar o proprio l, se n�o ele n�o
	vai retornar nada*/
	lst_vazia(l);
			valor=1;
		/*teste: vai criar uma lista com 10 elemento e buscar,a fun��o buscar vai retornar o endere�o de
		de l ou NULL, se caso o elemento que ta sendo buscado n�o estiver dentro da lista*/
		printf("digite 0 para parar de perguntar valores	\n");
		while(valor!=0) 
		{
			printf("passe um valor para a estrutura: ");
			scanf("%d", &valor);
			l = lst_insere(l, valor) ;
			
		}


	printf("------opcoes da lista-------\n");
	printf("\tcriar elemento vazio\n");
	printf("\tcria lista vazia\n\n");
	printf("1.insere novo elemento na lista\n");
	printf("2.imprime a lista\n");
	printf("3.busca lista\n");
	printf("4.exclue lista\n");
	printf("5.libera da lista\n");	
	scanf("%d", &escolha) ;
	if(escolha ==1)
	{

		
	}
	
	else if(escolha==2)
	{
		lst_imprime(l) ;
	}
	else if(escolha==3)
	{
		printf("passe um valor para a estrutura que quer buscar: ");
		scanf("%d", &valor);
		
		lst_busca(l, valor);
	}
	else if(escolha==4)
	{
		printf("passe um valor para a estrutura: ");
		scanf("%d", &valor);
		lst_retira(l, valor);
	}
	
	//teste da fun��o insere
	l = lst_insere(l, 23);	//insere na lista o elemento 23
	
	
	
	return 0;
}
