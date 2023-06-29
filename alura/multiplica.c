#include <stdio.h>

int main() {

	printf("Programa de multiplicação!\n");
	int x;
	printf("Escreva o primeiro número que você quer multiplicar:\n");
	scanf("%d", &x);
	int y;
	printf("Escreva o segundo número que você quer multiplicar:\n");
	scanf("%d", &y);
	int resultado = x*y;
	printf("O resultado da multiplicação é %d \n", resultado);

}
