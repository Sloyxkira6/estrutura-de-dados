#include <stdio.h>
#include <stdlib.h>

int main()
{
	//vai criar o pontoteiro para FILE
	FILE* fp=fopen("arquivo1.txt", "w+");
	printf("digite algo: ");
	if(fp==NULL)
	{
		perror("erro ao abrir o arquivo");
		exit(1);
	}
	//fopen fazer com que o ponteiro aponte para um arquivo no programa
	//após isso vai ser criado um arquivo de texto chamado teste.txt
	//vai criar o arquivo txt na pasta onde ta o codigo fonte
	fprintf(fp,"pao com mortadela.");
	//fprintf: vai receber dois argumentos, o primeiro vai ser o ponteiro
	//e o segundo vai ser ser escrito no arquivo
	int x, y, z;
	fscanf(fp, "%i %i %i", &x, &y, &z);
	//vai ler o que ta dentro do arquivo txt e armazenar dentro das variaveis
	//como argumento vai ser passado primeiro o ponteiro do arquivo
	//segundo vai ser passado as variaveis que vao receber os valorees 
	//do arquivo
	printf("%i %i %i", x, y, z);
	//vai imprimir na tela o que tinha no arquivo que foi recebido pelas
	//variaveis
	fclose(fp);
	//vai fechar o arquivo de maneira corretamente
	//system("pause");
	return 0;
}
