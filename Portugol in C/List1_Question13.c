#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float n1,n2,n3,n4,media;
	printf("Informe a nota do primeiro bimestre: ");
	scanf("%f",&n1);
	printf("Informe a nota do segundo bimestre: ");
	scanf("%f",&n2);
	printf("Informe a nota do terceiro bimestre: ");
	scanf("%f",&n3);
	printf("Informe a nota do quatro bimestre: ");
	scanf("%f",&n4);
	media=(n1*1+n2*2+n3*3+n4*4)/10;
	printf("\nA sua média é: %.2f",media);
	return 0;
}
