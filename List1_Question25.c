#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float valor, valor_desconto;
	printf("Informe o valor do produto: ");
	scanf("%f",&valor);
	valor_desconto=(valor-((valor*9)/100));
	printf("\nO valor com desconto de 9%% é: %.2f",valor_desconto);
	return 0;
}
