#include <stdio.h>
#include <stdlib.h>
#include "pilhagenerica.h"

//#include "pilhagenerica.h"

typedef struct aluno
{
    int mat;
    char nome[121];
    char email[81];
} Aluno;

Aluno* cria_aluno_null()
{
    return NULL;
}

void* registrar()
{
    Aluno* novo=(Aluno*)malloc(sizeof(Aluno));

    printf("digite a matricula do aluno: ");
    scanf("%d%*c", &novo->mat);

    printf("\ndigite o nome do aluno: ");
    scanf("%s%*c", novo->nome);

    printf("\ndigite o email do aluno: ");
    scanf("%80[^\n]", novo->email);

    return (void*)novo;
}

void imprime_aluno(void* ptr) //-> passado como callback, fica no main
{
	
    Aluno* a=(Aluno*)ptr;
    printf("matricula: %d\nnome: %s\nemail: %s", a->mat, a->nome, a->email);

    //free (a);
}

int main()
{
    int escolha;
    //ap: aluno ponteiro
    //pp: pilha ponteiro

    Aluno* ap = cria_aluno_null();
    PilhaGen* pp = pilhaGen_cria() ;

    pilhaGen_push(pp, registrar);
    printf("criado estrutura aluno...\ncriado estrutura generica para pilha...\n");

    printf("escolhe entre as opcoes:\n\n");
    printf("1.imprimir a lista\n");
    printf("2.retirar elemento da lista\n");
    scanf("%d", &escolha);

   if(escolha==1)
   {
       pilha_imprime(pp, imprime_aluno);
   }
   else if(escolha==2)
   {
       pilhaGen_pop(pp);
   }
    

    

    return 0;
}