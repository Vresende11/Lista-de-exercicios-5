#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char sexoUsuario;
	
	printf("Digite o seu sexo: ");
	scanf("%c", &sexoUsuario);
	sexoUsuario == 'f' ? printf("Sexo feminino") : printf("Sexo masculino");
}
