#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float p,h,imc;
	printf("Informe o seu peso: ");
	scanf("%f",&p);
	printf("Informa a sua altura: ");
	scanf("%f",&h);
	imc=p/(h*h);
	printf("\nO seu imc é: %.3f", imc);
	return 0;
}
