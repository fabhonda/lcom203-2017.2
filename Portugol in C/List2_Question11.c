#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float produto,venda;
	printf("Digite o valor do produto: ");
	scanf("%f",&produto);
	if(produto>20)
	{
		venda=(produto+((produto*30)/100));
		printf("\nO valor de venda é de: %.2f reais",venda);
	}
	else
	{
		venda=(produto+((produto*45)/100));
		printf("\nO valor de venda é de: %.2f reais",venda);
	}
	return 0;
}
