#include <stdio.h>
#include "arvorebinaria.h"


int main()
{
	int valor = 1, escolha;
	
	
	printf("1.inserir um valor para o no da arvore\n");
	printf("2.verificar se o elemento pertence a algum no da arvore\n");
	printf("3.imprimir a arvore em forma simetrica\n");
	printf("4.saber a profundidade da arvore\n");
	printf("5.buscar um valor que esteja na arvore\n");
	printf("6.retirar algum elemento da arvore\n\n");
	
	printf("escolha um das acoes para ser executada: ") ;
	scanf("%d", &escolha) ;
	
	Arv* p = arvbin_cria_vazia();
	/*teste das funções
		
		p=arvbin_insere_ord(p, 5);
		p=arvbin_insere_ord(p, 2);
		p=arvbin_insere_ord(p, 6);
		p=arvbin_insere_ord(p, 3);
		p=arvbin_insere_ord(p, 1);
		p=arvbin_insere_ord(p, 7);
		p=arvbin_insere_ord(p, 8);
	*/
	
	if(escolha==1)
	{
		
		printf("digite 0 para que o programa pare de pedir numero\n") ;
		
		while( valor!=0 )
		{
			scanf("%d", &valor);
			p=arvbin_insere_ord(p, valor);
		}
			
	}
	if(escolha==2)
	{	
		printf("digite o valor que quer buscar na arvore");
		scanf("%d", &valor) ;
		
		arvbin_pertence(p, valor);
	}
	if(escolha==3)
	{
		arvbin_imprime_simetrico(p);
	}
	if(escolha==4)
	{
		arvbin_altura(p);
	}
	if(escolha==5)
	{
		printf("digite o valor quer buscar: ");
		scanf("%d", &valor);
		
		arvbin_busca(p, valor);
	}
	if(escolha==6)
	{
		printf("digite o valor quer retirar: ");
		scanf("%d", &valor);
		
		arvbin_retira(p, valor);
	}

	arvbin_libera(p);
	
	return 0;
}
