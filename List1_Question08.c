#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float a,b,c;
	printf("Digite o valor do produto em reais: ");
	scanf("%f",&a);
	b=((a*55)/100);
	c=(a+b);
	printf("\nO valor do acr�scimo �: %.2f",b);
	printf("\nO valor do produto com o acr�scimo �: %.2f",c);
	return 0;
}
