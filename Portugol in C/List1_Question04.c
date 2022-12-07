#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float b,h,perimetro, area, diagonal;
	printf("Digite a base do retângulo: ");
	scanf("%f",&b);
	printf("Digite a altura do retângulo: ");
	scanf("%f",&h);
	perimetro=2*(b+h);
	area=(b*h);
	diagonal=sqrt(b*b+h*h);
	printf("\nO perímetro é: %.2f", perimetro);
	printf("\nA área é: %.2f", area);
	printf("\nA diagonal é: %.3f", diagonal);
	return 0;
	
}
