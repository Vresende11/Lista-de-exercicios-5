#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	int opcao;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a regi�o do Brasil que voc� gostaria de visitar\n\n");
	printf("Menu de op��es: \n");
	printf("===============\n");
	printf("1- Norte\n");
	printf("2- Nordeste\n");
	printf("3- Centro-oeste\n");
	printf("4- Sudeste\n");
	printf("5- Sul\n");
	printf("0- Sair do programa.\n\n");	
	printf("Digite sua op��o: ");
	scanf("%i", &opcao);
	
	if(opcao == 0) return 0;
	system("CLS");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                                           Sua op��o foi: ");
	switch(opcao){
		case 1: printf("Norte"); break;
		case 2: printf("Nordeste"); break;
		case 3: printf("Centro-oeste"); break;
		case 4: printf("Sudeste"); break;
		case 5: printf("Sul"); break;
	}
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n.");
}
