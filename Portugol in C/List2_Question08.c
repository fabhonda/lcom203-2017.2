#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b,c;
	printf("Digite o primeiro número: ");
	scanf("%d",&a);
	printf("Digite o segundo número: ");
	scanf("%d",&b);
	printf("Digite o terceiro número: ");
	scanf("%d",&c);
	if(a>b && a>c)
		printf("\nO número %d é o maior",a);
	if(b>a && b>c)
		printf("\nO número %d é o maior",b);
	if(c>a && c>b)
		printf("\nO número %d é o maior",c);
	if(b==c && a>b)
		printf("\nO número %d é o maior",a);
	if(b==c && a<b)
		printf("\nO número %d é o maior",b);
	if(a==c && b>a)
		printf("\nO número %d é o maior",b);
	if(a==c && b<a)
		printf("\nO número %d é o maior",c);
	if(b==a && c>a)
		printf("\nO número %d é o maior",c);
	if(b==a && c<a)
		printf("\nO número %d é o maior",a);
	if(a==b && b==c && a==c)
		printf("\nO três números são iguais: %d",c);
	return 0;
}
