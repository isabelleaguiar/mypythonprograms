#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// jogo simples de adivinhação com limite de tentativas e pontuação

int main() {

// cabeçalho


	printf("\n\n");
	printf("      ____\n");
	printf("     ||""||    ******************************************\n");
	printf("     ||__||   ****Você entrou no jogo de adivinhação****\n");
	printf("     [ -=.]`) ******************************************\n");
	printf("     ====== 0\n\n");
	printf("Escolha seu nível de dificuldade:\n");
	printf("entre 1, para fácil, 2, para médio ou 3, para difícil:\n");

// seção em que defino as variáveis

	int segundos = time(0);
	srand(segundos);
	int ale = rand();
	int numerosecreto = ale % 100;
	int chute;
	int tentativas = 1;
	int limitetentativa;
	int acertou = 0;
	double pontos = 1000;
	int nivel;

	scanf("%d", &nivel);
	
// loop para a escolha do nível

	if(nivel == 1) {
	
		limitetentativa = 15;
	
	}
	
	else if (nivel == 2){
	
		limitetentativa = 10;
	
	} 
	
	else {
	
		limitetentativa = 5;
	
	}
	
// loop para que o processo se repita ATÉ que o jogador acerte

	for(int i = 1; i <= limitetentativa; i++){

// seção interativa
		printf("\nTentativa %d.\n", tentativas);
		printf("\nChute o número que estou pensando.\n");
		
// função que recebe o valor

		scanf("%d", &chute);
		
		if(chute < 0) {
			printf("Números negativos não entram no jogo!");
			
// o continue para a execução desse bloco de código sem cancelar o loop for
			continue;
		}
		
// seção em que defino o loop pro acerto ou o erro, tomada de decisão
// crio uma variável que é igual a comparação entre chute e numerosecreto

		acertou = (chute == numerosecreto);
		int maior = chute > numerosecreto;
		
			if(acertou) {
				printf("Nossa, é esse mesmo!\n");
				
// condição para que o programa pare quando tiver acertado
				
				break;
			}
			
			else if(maior) {
				printf("Ih, não é esse. É um número menor do que esse!\n");
			}
			 
			else {
			
				printf("Ih, não é esse. É um número maior que esse!\n");
			}
			
			tentativas++;
	
			double perdidos = abs(chute - (double)numerosecreto) / 2.0;
			pontos = pontos - perdidos;
	}

	if(acertou) {
		printf("Fim de jogo! Você acertou em %d tentativas!\n", tentativas);
		printf("Sua pontuação foi de %.1f pontos.\n", pontos);
	} else {
		printf("Você perdeu, tente de novo...\n");
	}
}
