#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float valor, valor_desconto;
	printf("Informe o valor do produto: ");
	scanf("%f",&valor);
	valor_desconto=(valor-((valor*12)/100));
	printf("\nO valor do produto com desconto de 12%% é: %.2f",valor_desconto);
	return 0;
}
