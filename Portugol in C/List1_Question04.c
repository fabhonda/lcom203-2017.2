#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float b,h,perimetro, area, diagonal;
	printf("Digite a base do ret�ngulo: ");
	scanf("%f",&b);
	printf("Digite a altura do ret�ngulo: ");
	scanf("%f",&h);
	perimetro=2*(b+h);
	area=(b*h);
	diagonal=sqrt(b*b+h*h);
	printf("\nO per�metro �: %.2f", perimetro);
	printf("\nA �rea �: %.2f", area);
	printf("\nA diagonal �: %.3f", diagonal);
	return 0;
	
}
