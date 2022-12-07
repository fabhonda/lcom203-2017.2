#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[9];
	int horas_extras;
	float salario_minimo=750, valor_horaextra=70, salario_horaextra, salario_bruto, salario_liquido,desconto_inss,desconto_renda,desconto_total;
	printf("Informe seu nome: ");
	scanf("%s",nome);
	printf("Informe a quantidade de horas extras trabalhadas: ");
	scanf("%d",&horas_extras);
	salario_horaextra=(valor_horaextra * horas_extras);
	salario_bruto=(3*salario_minimo + salario_horaextra);
	if(salario_bruto>=1500 && salario_bruto<2000)
	{
		desconto_inss=((salario_bruto*12)/100);
		salario_liquido=(salario_bruto-desconto_inss);
		printf("\nO salário bruto é: %.2f reais",salario_bruto);
		printf("\nO salário líquido é: %.2f reais",salario_liquido);
	}	
	if(salario_bruto>=2000)
	{
		desconto_inss=((salario_bruto*12)/100);
		desconto_renda=((salario_bruto*20)/100);
		desconto_total=(desconto_inss+desconto_renda);
		salario_liquido=(salario_bruto-desconto_total);
		printf("\nO salário bruto é: %.2f reais",salario_bruto);
		printf("\nO salário líquido é: %.2f reais",salario_liquido);
		
	}
	else
	{
		salario_liquido=salario_bruto;
		printf("\nO salário bruto é: %.2f reais",salario_bruto);
		printf("\nO salário líquido é: %.2f reais",salario_liquido);
	}
	return 0;
}
