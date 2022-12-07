#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float media;
	int a,b;
	printf("Digite um número inteiro: ");
	scanf("%d",&a);
	printf("Digite outro número inteiro: ");
	scanf("%d",&b);
	media=(a+b)/2;
	printf("\nA média aritmética é: %.1f",media);
	return 0;
}
