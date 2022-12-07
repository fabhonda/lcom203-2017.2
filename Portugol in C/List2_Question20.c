#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float a,b,c;
	printf("Digite o primeiro lado: ");
	scanf("%f",&a);
	printf("Digite o segundo lado: ");
	scanf("%f",&b);
	printf("Digite o terceiro lado: ");
	scanf("%f",&c);
	if(a*a==b*b*c*c)
		printf("\nTRIÂNGULO RETÂNGULO");
	if(a*a<b*b*c*c)
		printf("\nTRIÂNGULO ACUTÂNGULO");
	if(a*a>b*b*c*c)
		printf("\nTRIÂNGULO OBTUSÂNGULO");
	return 0;
}
