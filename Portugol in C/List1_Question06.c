#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float media;
	int a,b;
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&a);
	printf("Digite outro n�mero inteiro: ");
	scanf("%d",&b);
	media=(a+b)/2;
	printf("\nA m�dia aritm�tica �: %.1f",media);
	return 0;
}
