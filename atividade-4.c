#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numeroDigitado;
	printf("-----------------------------\n");
	printf("Loja de m�veis de inform�tica\n");
	printf("-----------------------------\n\n");
	printf("Digite o n�mero do m�vel que voc� quer comprar: ");
	scanf("%i", &numeroDigitado);
	
	while(true){
		switch(numeroDigitado){
			case 1: printf("Cadeira"); break;
			case 2: printf("Mesa de computador"); break;
			case 3: printf("estante de livros"); break;
			case 4: printf("Mesa de impressora"); break;
			case 5: printf("Estante de CD"); break;
			default: printf("M�vel n�o est� dispon�vel, tente novamente...");
		}	
	}
}
