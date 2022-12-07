#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float b, h, a;
	printf("\nDigite a base do losango: ");
	scanf("%f",&b);
	printf("Digite a altura do losango: ");
	scanf("%f", &h);
	a=((b*h)/2);
	printf("\nA área do losango é: %.2f", a);
	return 0;
}
