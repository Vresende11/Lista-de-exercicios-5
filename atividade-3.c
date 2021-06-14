#include<stdio.h>
#include<locale>

int main(){
	char caractere;
	printf("Digite um caractere: ");
	scanf("%c", &caractere);
	
	printf("----- resultado: -------\n\n");
	printf("||Caractere em: \n");
	printf("-> caractere: %c\n", caractere);
	printf("-> decimal: %i\n", caractere);
	printf("-> hexadecimal: 0x%x\n", caractere);
	
}
