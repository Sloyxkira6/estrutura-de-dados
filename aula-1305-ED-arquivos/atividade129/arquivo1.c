#include <stdio.h>
#include <stdlib.h> 

typedef struct arv
{

    int info;
    struct arv* dir ;
    struct arv* esq ;

} Arv;

Arv* arvbin_insere_ord(Arv* a, FILE* fp)
{

	int valor;
	fp=fopen("arquivo1.txt", "r");
	fscanf(fp, "%d", &valor);
	printf("valor contido no arquivo: %d", valor);

	if(arvbin_vazia(a))
	{
		a=(Arv*)malloc(sizeof(Arv));
		
		a->info=valor ;
		a->dir=NULL ;
		a->esq=NULL ;
			
	}
	else
	{
		if(valor<a->info)
		{
			a->esq=arvbin_insere_ord(a->esq, fp);
			
		}
		else
		{
			a->dir=arvbin_insere_ord(a->dir, fp);
		}
	}
	
	return a;
}

//vai pegar do arquivo o que ta escrito e colocar em um no
Arv* arvbin_carrega(FILE* fp)
{
	Arv* t=(Arv*)malloc(sizeof(Arv));
	char info3[10];
	for(int i=0; fgets(info3,10,fp)!=NULL;i++)
	{
		sscanf(info3, "%d", t->info);
	}
	
}