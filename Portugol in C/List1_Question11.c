#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float r,h,v;
	printf("Informe a altura da lata de �leo (em cm): ");
	scanf("%f",&h);
	printf("Informe o raio da lata de �leo (em cm): ");
	scanf("%f",&r);
	v=(3,14*r*r*h);
	printf("\nO volume da lata de �leo �: %.2f cm�",v);
	return 0;
}
