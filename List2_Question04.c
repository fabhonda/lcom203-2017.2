#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float a,b,c;
	printf("Informe o sal�rio bruto: ");
	scanf("%f",&a);
	printf("Informe o valor da presta��o: ");
	scanf("%f",&b);
	c=((a*30)/100);
	if(b>c)
	printf("\nO EMPR�STIMO N�O PODE SER CONCEDIDO");
	else
	printf("\nO EMPR�STIMO PODE SER CONCEDIDO");
	return 0;
}
