#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float salario,desconto;
	printf("Informe o seu salário: ");
	scanf("%f",&salario);
	if(salario<=600)
		printf("\nIsento de Desconto.");
	if(salario>600 && salario<=1200)
	{
		desconto=(salario-((salario*20)/100));
		printf("\nVocê possui desconto de 20%%, e o valor do seu INSS fica: %.2f reais",desconto);
	}
	if(salario>1200 && salario<=2000)
	{
		desconto=(salario-((salario*25)/100));
		printf("\nVocê possui desconto de 25%%, e o valor do seu INSS fica: %.2f reais",desconto);
	}
	if(salario>2000)
	{
		desconto=(salario-((salario*30)/100));
		printf("\nVocê possui desconto de 30%%, e o valor do seu INSS fica: %.2f reais",desconto);
	}
	return 0;
}
