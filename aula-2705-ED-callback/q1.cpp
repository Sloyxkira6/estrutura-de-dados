#include <stdio.h>

int soma(int a, int b)
{
	printf("%d + %d=%d\n", a,b,a+b);
	return a+b;
}
int sub(int a, int b)
{
	printf("%d - %d=%d\n", a,b,a-b);
	return a-b;
}
void imprime(int(*ptr)(int, int), int(*ptr1)(int, int))
//se fosse ponteiro seria int*
{
	int a=10, b=13;

	printf("%d", ptr(a,b)-ptr1(a,b));
		
}

int main()
{
	imprime(soma, sub);

	return 0;
}