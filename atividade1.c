#include<stdio.h>
#include<locale>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float valorPercentual;
	
	while(true){
		printf("Digite o valor percentual que você deseja calcular: ");
		scanf("%f", &valorPercentual);
		if(valorPercentual <= 100 && valorPercentual >= 0) break;
		else printf("Valor inválido, tente outro valor...\n");
	}
	float resultado = valorPercentual * 555 / 100;
	printf("%.2lf%% de 555 é %.2lf", valorPercentual, resultado);
}
	
