#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b,soma;
	printf("Digite um n�mero: ");
	scanf("%d",&a);
	printf("Digite outro n�mero: ");
	scanf("%d",&b);
	soma=(a+b);
	if(soma>20)
	{
		soma+=8;
		printf("\n\t %d",soma);
	}
	else
	{
		soma-=5;
		printf("\n\t %d",soma);
	}
	return 0;
}
