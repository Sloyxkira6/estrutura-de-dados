#include <stdio.h>
#include "fila.h"

int main()
{
	float valor;
	int escolha ;
	Fila* f;
	
	printf("1.inserir elemento na lista\n");
	printf("2.imprimir elementos da lista\n");
	printf("3.retirar elmento da lista\n");
	
	printf("escolha uma das opcoes acima: ");
	scanf("%d", &escolha);
	
	f= fila_cria();
	fila_vazia(f);
	
	if(escolha==1)
	{
		//int i=1 ;
		//while(i!=0)
		//{
			printf("escreva o valor a ser inserido: \n");
			scanf("%f", &valor);
			fila_insere(f, valor);
		//}

	}
	if(escolha==2)
	{
		fila_imprime(f);
	}
	if(escolha==3)
	{
		fila_retira(f);
	}
	fila_libera(f);
	
	return 0;
}
