#include <stdio.h>
#include <stdlib.h> 
#include "arquivo1.h"

int main()
{
	//vai pegar 123 que ta dentro do arquivo
	//para que valor deposite em info
	//w vai criar o arquivo e armazenar 'valor' no arquivo
    FILE* fp=fopen("arquivo1.txt", "w");
    if(fp==NULL)
    {
        perror("arquivo nao pode ser acessado");
        exit(1);
    }
    //teste
    int valor=123;
	fprintf(fp, "%d", valor);
	fclose(fp);
	
	
    Arv* a = arvbin_cria_vazia();
    a=arvbin_insere_ord(a, fp);
    
    arvbin_carrega(fp);

    return 0;
}


