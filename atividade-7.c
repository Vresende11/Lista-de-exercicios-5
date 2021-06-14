#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tresNumeros[3];
	int substituir;
	
	for(int i = 0; i< 3; i++){
		printf("Digite um valor numerico: ");
		scanf("%i", &tresNumeros[i]);
	}
	
	for(int j = 0; j<3;j++){
		for(int k = j+ 1; k<3; k++){
			if(tresNumeros[j] > tresNumeros[k]){
				//troca de posição
				substituir = tresNumeros[j];
				tresNumeros[j] = tresNumeros[k];
				tresNumeros[k] = substituir; 
			}
		}
	}
	
	printf("Lista de números ordenada: [");
	for(int num = 0; num<2;num++){
		printf("%i, ", tresNumeros[num]);
	}
	printf("%i]", tresNumeros[2]);
}
