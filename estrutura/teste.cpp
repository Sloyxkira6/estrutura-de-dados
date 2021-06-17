#include <stdio.h>

int main()
{
	int resultado, a,b, valor;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	valor = a+b;
	
	resultado = valor < 10 ? 50 : 0 ; //valor_verdadeiro : valor_faso
	
	printf("%d", resultado) ;
	
	return 0;
}
