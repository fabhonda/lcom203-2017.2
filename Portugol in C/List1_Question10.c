#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float c,f;
	printf("Digite uma temperatura em Celsius: ");
	scanf("%f",&c);
	f=((9*c+160)/5);
	printf("\nA temperatura em Fahrenheit é: %.2f",f);
	return 0;
}
