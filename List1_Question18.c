#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float sal_min, sal_pessoa, qtd;
	printf("Informe o valor do sal�rio m�nimo: ");
	scanf("%f",&sal_min);
	printf("Informe o valor do seu sal�rio: ");
	scanf("%f",&sal_pessoa);
	qtd=(sal_pessoa/sal_min);
	printf("\nVoc� ganha %.1f sal�rios m�nimos",qtd);
	return 0;
	
}
