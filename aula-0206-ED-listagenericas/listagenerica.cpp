#include <stdio.h>
#include <stdlib.h>
#include "listagenerica.h"

/*
Crie uma TAD Lista Genérica para manipular informações de alunos de uma instituição.
A TAD deve ser genérica e as funções passadas como parâmetro (callbacks) devem ser 
implementadas no arquivo main.c (organiza-se, utilize protótipos e inclua as funções 
depois da função main).
Com TAD deve ser possível, criar lista, verificar se está 
vazia e imprimir todos os elementos da lista.
*/


typedef struct aluno
{
    int mat;
    char nome[121];
    char email[81];
} Aluno;

Aluno* aluno_null()
{
	return NULL;
}

int aluno_vazio(Aluno* ap)
{
	return ap==NULL;
}

//vai ser passada para função lgen_imprime para que possa imprimir
//dentro de aluno
void imprime_aluno(void* ptr) //-> passado como callback, fica no main
{
	
    Aluno* a=(Aluno*)ptr;
    printf("matricula: %d\nnome: %s\nemail: %s", a->mat, a->nome, a->email);

    //free (a);
}

//ele vai criar um novo nó e seu ponteiro vai ser armazenado no ponteiro void
Aluno* cria_aluno()
{
    Aluno* novo=(Aluno*)malloc(sizeof(Aluno*));

    printf("digite a matricula do aluno: ");
    scanf("%d", &novo->mat);

    printf("digite o nome do aluno: ");
    scanf("%s", novo->nome);

    printf("digite o email do aluno: ");
    scanf("%s", novo->email);

    printf("\ncriado estrutura aluno...\n");
    
    return novo;

    
}


//apenas usado para comparar dentro da função lgen_exclui
int compara_aluno(void* a, void* m) //a - ponteiro | m - matricula

{
    Aluno* aluno=(Aluno*)a;
    int* matricula=(int*)m;
    return aluno->mat==*matricula; //depois que é feito o cast, ainda vai apenas apontar para o valor,
                                   // entao para comparar o valor real, adiciona * em 'simmatricula'
}

int main()
{
    
    
    int valor=1, escolha;
	//valor: para dizer quando parar
    //escolha: escolher qual função sera execultada
    
        Aluno* ap = aluno_null();
        
        printf("1.verificando se aluno esta vazio...\n0-nao\t1-sim\ncodigo de resposta: %d", aluno_vazio(ap));
        
        ListaGen* L =lgen_cria(); 
        printf("\n2.criado ponteiro de lista generica");
        
        printf("\n3.verificando se no de lista generica esta vazio...\n0-nao\t1-sim\ncodigo de resposta: %d\n", lgen_vazia(L));

        for(int i=0; i<10; i++)
        {
            ap = cria_aluno();
            L = lgen_insere(L, ap);
        }

            
        
        printf("\n4.criado lista de estrutura aluno e lista de estrutura generica\n");
        printf("\n5.passado para cast ponteiro lista generica\n");
    
        printf("O que deseja fazer agora?\n");
        printf("1.imprimir lista\n");
        printf("2.buscar estrutura aluno\n");
        printf("3.excluir no da lista\n");
        scanf("%d", &escolha);

    if(escolha==1)
    {
        printf("6.imprimindo a lista...\n");
        lgen_imprime(L, imprime_aluno);
    }
    if(escolha==2)
    {
        Aluno* elemento=(Aluno*)lgen_busca(L, compara_aluno, ap);
        if(elemento==NULL)
        {
            printf("Aluno nao encontrado. \n");
        }
        else if(elemento!=NULL)
        {
        	printf("Aluno encontrado");
		}
    }
    if(escolha==3)
    {
        lgen_exclui(L, compara_aluno, ap);
    }

    return 0;

}
