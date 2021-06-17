#include <stdio.h>
#include <math.h>

int main()
{
	
	float ax, ay, bx, by, resultado ;
	
	printf("digite os pontos necessarios na sequencia ax ay e bx by:");
	scanf("%f %f %f %f", &ax, &ay, &bx, &by);
	
	
	resultado = pow((bx - ax),2) + pow((by - ay),2);
	
	resultado = sqrt(resultado) ; //calcula a raiz quadrada de um numero
	
	printf("o resultado: %.2f", resultado) ;
	
	// calcular, distância euclidiana entre dois pontos
}
