#include <stdio.h>
#include <stdlib.h>

typedef struct nd {
    int data;
    struct nd *next;
} node;

typedef struct {
    int nNodes; //posi��o dos elementos
    node *first;
} myLst;



int main ()
{
	
	
	node* elemento=NULL ;
	myLst* lista ;
	
	
	int pos, quantidade, valor;
	
	
	
	printf("informe a quantidade de elementos: ") ;
	scanf("%d", lista->nNodes);
	
	
	//criar a lista com os elementos, escolhendo os elementos
	//
	for(int i=0; i < lista->nNodes; i++)
	{
		printf("digite a posi��o do elemeneto: ");
		scanf("%d", &pos);
		
		
		//verifica se a posi��o � valida
		//posi��es validas: acima de 0(zero) e antes do valor limite
		//informado acima
		if(pos <= 0 )
		{
			printf("posi��o invalida") ;
		}
		else if(pos > lista->nNodes)
		{
			printf("posi��o invalida") ;
		}
		
		//cria um novo n�
		else
		{
			printf("digite o valor que quer inserir na posi��o %d: ", pos);
			scanf("%d", &valor);
			
			elemento = (node*)malloc(sizeof(node));
			
			elemento->data=valor;
			elemento->next=NULL ;
			
			
			printf("\n");
			
		}
	}
	
	
	return 0;
}


