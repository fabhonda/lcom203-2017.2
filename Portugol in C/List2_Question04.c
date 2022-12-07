#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float a,b,c;
	printf("Informe o salário bruto: ");
	scanf("%f",&a);
	printf("Informe o valor da prestação: ");
	scanf("%f",&b);
	c=((a*30)/100);
	if(b>c)
	printf("\nO EMPRÉSTIMO NÃO PODE SER CONCEDIDO");
	else
	printf("\nO EMPRÉSTIMO PODE SER CONCEDIDO");
	return 0;
}
