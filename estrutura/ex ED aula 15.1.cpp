#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
	int mat ;
	char nome[81] ;
	char end[121] ;
	char tel[21] ;
	
} Aluno, *PAluno ;

Aluno* criar_aluno() ;
Aluno* ler_aluno(Aluno** tab);
void atualizar_aluno(Aluno** tab) ;
void deletar_aluno(Aluno** tab) ;
void listar_aluno(Aluno** tab) ;

int main()
{
	PAluno tab[100] ;
	char OP = 'A' ;
		
	
	for(int i=0;i<100;i++)
	{
		tab[i]=NULL ;
	}
	tab[2]=criar_aluno() ;
	fflush(stdin) ;
	
	printf("Escolha qual opção quer ser execultadada:\n\n- Criar nova matricula: c\n- Mostrar dados de aluno: l\n- Atualizar dados de aluno: a\n- Deletar cadastro do aluno: d\n");
	printf("- Listar alunos: i\n") ;
	scanf("%c", &OP) ;
	
	
	if(OP=='c')
	{
		//tab[2]=criar_aluno();
	}
	else if(OP=='l')
	{
		ler_aluno(tab); 
	}
	else if(OP=='a')
	{
		atualizar_aluno(tab) ;
	}
	else if(OP=='d')
	{
		deletar_aluno(tab) ;
	}
	else if(OP=='i')
	{
		listar_aluno(tab);
	}
	
	
	return 0;
}

Aluno* criar_aluno()
{
	PAluno mat =(PAluno)malloc(sizeof(Aluno)) ;
	
	printf("digite a matricula: ") ;
	scanf("%d%*c", &mat->mat) ;
	printf("digite o  nome do aluno: ");
	scanf("%80[^\n]%*c", &mat->nome) ;
	printf("digite o endereço do aluno: ");
	scanf("%120[^\n]%*c", &mat->end) ;
	printf("digite o numero de contato do aluno: ");
	scanf("%20[^\n]", &mat->tel) ;

	
	return mat ;	
}
Aluno* ler_aluno(Aluno** tab)
{
	int mat ;
	
	printf("escreva o numero da matricula: ") ;
	scanf("%d", &mat) ;	
	
	for(int i=0; i<100; i++)
	{
		if(tab[i]!=NULL)
		{
			if(tab[i]->mat==mat)
			{
				printf("matricula: %d", tab[i]->mat) ;
				printf("nome do aluno: %s", tab[i]->nome) ;
				printf("endereço: %s", tab[i]->end) ;
				printf("numero de contato: %s", tab[i]->tel) ;
				
			}

		}
	}
	
	
}
void atualizar_aluno(Aluno** tab)
{
	int i=0, mat;
	
	printf("escreva o numero da matricula: ") ;
	scanf("%d", &mat) ;	
		
	for(i=0; i<100; i++)
	{
		if(tab[i]!=NULL)
		{
			if(tab[i]->mat==mat)
			{
				printf("matricula: ") ;
				scanf("%d%*c", &tab[i]->mat) ;
				printf("nome do aluno: ") ;
				scanf("%80[^\n]%*c", &tab[i]->nome) ;
				printf("endereço: ") ;
				scanf("%80[^\n]%*c", &tab[i]->end) ;
				printf("numero de contato: ") ;
				scanf("%80[^\n]%*c", &tab[i]->tel);
				
			}
		}
	}
	
	
}
void deletar_aluno(Aluno** tab)
{
	int i=0, mat ;
	
	printf("escreva o numero da matricula: ") ;
	scanf("%d", &mat) ;
	
	for(i=0; i<100; i++)
	{
		if(tab[i]!=NULL)
		{
			if(tab[i]->mat==mat)
			{
				free(tab[i]) ;
				tab[i]=NULL ;
			}
		}
	}
	printf("cadastro excluido com sucesso!") ;
	
	
}

void listar_aluno(Aluno** tab)
{
	for(int i=0; i<100; i++)
	{
		if(tab[i]!=NULL)
		{
			printf("\nmatricula: %d", tab[i]->mat) ;
			printf("\nnome do aluno: %s", tab[i]->nome) ;
			printf("\nendereço: %s", tab[i]->end) ;
			printf("\nnumero de contato: %s", tab[i]->tel) ;
		}
	}
	
}
