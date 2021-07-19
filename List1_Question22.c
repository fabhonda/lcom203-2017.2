#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float a,b,c,soma,produto,aa,ab;
	printf("Digite o primeiro número: ");
	scanf("%f",&a);
	printf("Digite o segundo número: ");
	scanf("%f",&b);
	printf("Digite o terceiro número: ");
	scanf("%f",&c);
	soma=(a+b+c);
	produto=(a*b*c);
	aa=(sqrt(a));
	ab=(pow(a,b));
	printf("\nA soma dos três números é: %.2f",soma);
	printf("\nO produto dos três números é: %.2f",produto);
	printf("\nA raiz quadrada do primeiro número: %.2f",aa);
	printf("\nO primeiro número elevado ao segundo é: %.2f",ab);
	return 0;
	
}
