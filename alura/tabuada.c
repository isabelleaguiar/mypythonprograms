#include <stdio.h>

//programa que calcula a tabuada


int main() {

	int entrada;
	scanf("%d", &entrada);
	
	int i = 0;
	int resultado;
	
	for(i; i <= 10; i++) {
	
		resultado = entrada * i;
		printf("\n%d\n", resultado);
		
	}
}
