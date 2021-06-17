#include <stdio.h>
#include <cstdlib>

int main()
{
	char linha[121];
	int a, b;
	FILE* fp=fopen("arquivo.txt", "rt");
	if(fp==NULL)
	{
		printf("erro ao abrir arquivo");
		exit(1);
	}
	
	
	
	int c;
	
	while(fscanf(fp,"%c",&c)==-1)	
	   //(fscanf(fp,"%c",&c)==-1)
	   //(c=fgetc(fp)!=EOF)
	{
		printf("%c", c);
	}
	fclose(fp);
	scanf("%s", linha);
	
	//ta sendo execultado essa parte
	//----------------------------
	FILE* entrada=fopen("arquivo.txt", "rt");
	if(entrada==NULL)
	{
		//ta sendo execultado essa parte
		perror("Erro ao abrir arquivo ");
	}
	if(fgets(linha,121, entrada)!=NULL)
	{
		printf("%s", linha);
	}
	fclose(entrada);
	
	
	//--------------------------------
	if(entrada==NULL)
	{
		//e essa
		perror("erro ao abrir arquivo: ");	
	}
	if(fgets(linha,121, entrada)!=NULL)
	{
		int n=sscanf(linha, "%d\t%d%", &a,&b);
		printf("%d elementos: %d e %d." ,n,a,b);
	}
	fclose(entrada);
	
	//-------------------------------
	//criado um arquivo chamado saida que contem
	
	FILE* saida=fopen("saida.txt", "wt");
	if(saida==NULL)
	{
		perror("erro ao abrir arquivo:");
	}
	fprintf(saida, "ola mundo!\n%d", 123);
	
	fclose(saida);
	
	//anotações
	/*  fp: ponteiro para file, que aponta para o buffer de memoria onde 
		fopem: vai abrir o arquivo que quer abrir
		nome_arquivo: caminho do arquivo
		modo: a forma quer abrir o arquivo
	
		r:read (+):pode escrever
		w:write (+):
		a:append
		t:text
		b:binary
		
		perro(); se colocar ele vai imprimir o que esta dando erro
		if(fp==NULL)
		{
			perro("O erro é: ");
		}
		EOF: final de arquivo 'end of file' EOF=-1 é igual a -1
		fgetc(fp): vai returnar o primeiro caracter do arquivo
		e vai armazenar em c, em forma de inteiro	
		fopen(): abre um arquivo, vai procurar no endereço do buffer fp
		fclose(): fecha um arquivo
		fgetc(): 
		fgets(): escreve no burfer
		fprintf():
		sscanf():
	*/
	
}
