#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b,c;
	printf("Digite o primeiro lado: ");
	scanf("%d",&a);
	printf("Digite o segundo lado: ");
	scanf("%d",&b);
	printf("Digite o terceiro lado: ");
	scanf("%d",&c);
	if(a<0 || b<0 || c<0)
		printf("\nERRO. Digite valores maiores que 0");
	if((a==b && c!=a) || (b==c && a!=b) || (a==c && b!=a))
		printf("\nTri�ngulo is�sceles");
	if(a==b && c==a && b==c)
		printf("\nTri�ngulo ret�ngulo");
	if(a!=b && c!=a && b!=c)
		printf("\nTri�ngulo escaleno");
	return 0;
}
