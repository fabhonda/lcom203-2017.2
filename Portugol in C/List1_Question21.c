#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b,c;
	printf("Digite um n�mero: ");
	scanf("%d",&a);
	printf("Digite outro n�mero: ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\na = %d",a);
	printf("\nb = %d",b);
	return 0;
}
