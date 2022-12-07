#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float sal_min, sal_pessoa, qtd;
	printf("Informe o valor do salário mínimo: ");
	scanf("%f",&sal_min);
	printf("Informe o valor do seu salário: ");
	scanf("%f",&sal_pessoa);
	qtd=(sal_pessoa/sal_min);
	printf("\nVocê ganha %.1f salários mínimos",qtd);
	return 0;
	
}
