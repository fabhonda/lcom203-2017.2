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
	if(a>b)
	printf("\nO primeiro n�mero � maior que o segundo");
	if(a<b)
	printf("\nO segundo n�mero � maior que o primeiro");
	if(a==b)
	printf("\nOs dois n�meros s�o iguais");
	return 0;
}
