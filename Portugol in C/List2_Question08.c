#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b,c;
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&a);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&b);
	printf("Digite o terceiro n�mero: ");
	scanf("%d",&c);
	if(a>b && a>c)
		printf("\nO n�mero %d � o maior",a);
	if(b>a && b>c)
		printf("\nO n�mero %d � o maior",b);
	if(c>a && c>b)
		printf("\nO n�mero %d � o maior",c);
	if(b==c && a>b)
		printf("\nO n�mero %d � o maior",a);
	if(b==c && a<b)
		printf("\nO n�mero %d � o maior",b);
	if(a==c && b>a)
		printf("\nO n�mero %d � o maior",b);
	if(a==c && b<a)
		printf("\nO n�mero %d � o maior",c);
	if(b==a && c>a)
		printf("\nO n�mero %d � o maior",c);
	if(b==a && c<a)
		printf("\nO n�mero %d � o maior",a);
	if(a==b && b==c && a==c)
		printf("\nO tr�s n�meros s�o iguais: %d",c);
	return 0;
}
