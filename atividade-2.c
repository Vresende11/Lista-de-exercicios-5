#include<stdio.h>
#include<locale>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("======= maior número ========= \n\n");
	
	int valorNumerico;
	int nums[3];
	int maiorNumero= 0;
	
	for(int i = 0; i<3; i++){
		printf("Digite um valor numerico inteiro: ");
		scanf("%i", &nums[i]);
	}
	
	for(int j = 0; j<3; j++)
		if(nums[j] > maiorNumero) maiorNumero = nums[j];
	
	
	printf("O maior número digitado é %i", maiorNumero);
	
}
