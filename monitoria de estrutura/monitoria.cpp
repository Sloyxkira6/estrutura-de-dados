#include <stdio.h>
#include <stdlib.h>

typedef struct nd
{
	int data;
	struct nd *next ;
	
} node;

typedef struct
{
	int nNodes ;
	node *first;
} lista ;

int main()
{

	lista *MyList ;
	node *newNode = NULL;
	node *aux = NULL ;
	
	int nNodes, dataNode;
	
	printf("informe o numero de elementos da lista: ");
	scanf("%d", &nNodes);
	
	for(int i=0; i< nNodes; i++)
	{
		printf("digite o dado do %d° no da lista: ", i);
		scanf("%d", *dataNode);
		//inserindo elementos no inicio da lista 
		
		newNode = (node*) malloc (sizeof(node));
		//cast: conversão explicita de tipo pelo programador
		//		converte de (void*) para (node*).
	
		// float <- int
		// int <- float
		// node* <- void*
		
		newNode->data = dataNode ;
		newNode->next = MyList ;
		
		printf("digite a posição do novo nó lista: ");
		scanf("%d", &pos);
		
		if(pos<=0)
		{
			printf("posição invalida");
			
		}
		else
		{
			printf("digite o dado do %d no da lista: ");
			scanf("%d", &dataNode);
			
			newNode =(node*) malloc(sizeof(node));
			
			newNode->data = dataNode ;
			newNode->next = NULL ;
			
			//inserção no inicio
			if((pos ==1) || (myList.first)
			{
				newNode->next = myList.first:
				myList.first = newNode;
				
			}
			else
			{
				if(pos <= myList.nNodes)
				{
					aux = myList.first;
					for(int i =1: i< pos; i++)
					{
						aux = aux ->next;
					}
					newNode->next= aux->next;
					aux->next=newNode;
				}
			}
			//inserção no final
			if(pos >myList.nNodes)
			{
			
				if(pos > myList.nNodes+1)
				{
					for(node *aux= myList.first; aux->next !=NULL; aux=aux->next )
					{
						
					}
					aux->next =newNode;
					myList.nNode++;
				}
				
				newNode =NULL;
		}
		
		printf("percorre o ")
		MyList = newNode ;
		newNode = NULL;
		
	}
	
	
	
	aux = MyList;
	while (aux != NULL)
	{
		printf ("data: %d" aux->data);
		aux = aux->next ;
	}
	// liberar memoria alocada para os nós da lista
	
	printf("liberando memoria alocada para a lista...");
	// percorrer a lista exibindo os elementos inseridos
	node *exNode = NULL;
	while (MyList. != NULL)
	{
		exNode = MyList;
		MyList = MyList -> next;
		free(exNode) ;
		
	}	
	exNode = MyList = NULL ;
	
	return 0;
}



/*notações:

myList->data



*/
