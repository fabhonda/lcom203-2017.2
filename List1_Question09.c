#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float a,b,c,d;
	printf("Digite os lados do paralelep�pedo: \n");
	printf("\na: ");
	scanf("%f",&a);
	printf("\nb: ");
	scanf("%f",&b);
	printf("\nc: ");
	scanf("%f",&c);
	d=sqrt(a*a+b*b+c*c);
	printf("\nA diagonal do paralelep�pedo �: %.2f",d);
	return 0;
}
