#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b;
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&a);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&b);
	if(a<b)
	printf("\n\t %d \t %d",a,b);
	else
	printf("\n\t %d \t %d",b,a);
	return 0;

}
