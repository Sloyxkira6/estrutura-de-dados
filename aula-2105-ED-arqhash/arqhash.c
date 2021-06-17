
#define n 100

typedef struct aluno
{
	int matricula;
	char nome[100];
	char turma[20];
	char email[100];
	
}Aluno;

static int hash(int mat)
{
	return mat%7;
}
Aluno* hsh_busca(Hash tab, int mat)
{
	int h=hash(mat);
	if(tab[h]->mat==mat)
	{
		return tab[h];
	}
	return NULL;
}

void hsh_grava(FILE* fp, Aluno** tab)
{
	for(int i=0; i<7; i++)
	{
		if(tab[i]!=NULL)
		{
			fprintf(fp, "%d\n", tab[i]->matricula);
			fprintf(fp, "%s\n", tab[i]->nome);
			fprintf(fp, "%s\n", tab[i]->turma);
			fprintf(fp, "%s\n", tab[i]->email);
			free(tab[i]);
		}
	}
	free(tab);
}

Aluno** hsh_carrega(FILE* fp)
{
	Aluno** tab=(Aluno**)malloc(N*sizeof(Aluno));
	Aluno** t=(Aluno**)malloc(sizeof(Aluno));
	char linha[121];
	for(int i=0; fgets(linha,121,fp)!=NULL;i++)
		switch(i%4)
		{
			case 0: 
			sscanf(linha, "%d", t->matricula);
			break;
			
			case 1: sscanf(linha,"%s", t->nome);
			break;
			
			case 2: sscanf(linha, "%s", t->turma);
			break;
			
			case 3: sscanf(linha, "%s", t->email);
			tab[hash(t->matricula)]=t;
			free(t);
			break;
		}
}
