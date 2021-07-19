#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int qtd_fitas, qtd_fitasatrasadas, qtd_fitasrestantes;
	float valor_aluguel,fat_mes,fat_ano,valor_aluguelmulta;
	printf("Informe a quantidade de fitas: ");
	scanf("%d",&qtd_fitas);
	printf("Informe o valor do aluguel: ");
	scanf("%f",&valor_aluguel);
	fat_mes=((qtd_fitas/3)*valor_aluguel);
	fat_ano=(fat_mes*12);
	valor_aluguelmulta=((valor_aluguel+((valor_aluguel*10/100)))*((qtd_fitas*10)/100));
	qtd_fitasrestantes=((qtd_fitas-((qtd_fitas*2)/100)) + (qtd_fitas*1)/100);
	printf("\nA quantidade de fitas é: %d",qtd_fitas);
	printf("\nO valor do aluguel é: %.2f reais",valor_aluguel);
	printf("\nO faturamento anual é: %.2f reais",fat_ano);
	printf("\nO valor ganho com multas no mês é: %.2f",valor_aluguelmulta);
	printf("\nA quantidade de fitas restantes no final do ano é: %d",qtd_fitasrestantes);
	return 0;
}
