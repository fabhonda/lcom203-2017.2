#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float val_salmin,quant_kw,valor_kw,valor_reais,valor_desconto;
	printf("Informe o valor do salário mínimo: ");
	scanf("%f",&val_salmin);
	printf("Informe a quantidade de quilowatts gasta: ");
	scanf("%f",&quant_kw);
	valor_kw=(val_salmin/700);
	valor_reais=(valor_kw*quant_kw);
	valor_desconto=(valor_reais - ((valor_reais*10)/100));
	printf("\nO valor de cada quilowatt é: %.2f reais",valor_kw);
	printf("\nO valor a ser pago é: %.2f reais",valor_reais);
	printf("\nO valor a ser pago com desconto de 10%% é: %.2f reais",valor_desconto);
	return 0;
}
