#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float a,b,c,soma,produto,aa,ab;
	printf("Digite o primeiro n�mero: ");
	scanf("%f",&a);
	printf("Digite o segundo n�mero: ");
	scanf("%f",&b);
	printf("Digite o terceiro n�mero: ");
	scanf("%f",&c);
	soma=(a+b+c);
	produto=(a*b*c);
	aa=(sqrt(a));
	ab=(pow(a,b));
	printf("\nA soma dos tr�s n�meros �: %.2f",soma);
	printf("\nO produto dos tr�s n�meros �: %.2f",produto);
	printf("\nA raiz quadrada do primeiro n�mero: %.2f",aa);
	printf("\nO primeiro n�mero elevado ao segundo �: %.2f",ab);
	return 0;
	
}
