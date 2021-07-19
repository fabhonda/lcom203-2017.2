#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b;
	printf("Digite o primeiro número: ");
	scanf("%d",&a);
	printf("Digite o segundo número: ");
	scanf("%d",&b);
	if(a>b)
	printf("\nO primeiro número é maior que o segundo");
	if(a<b)
	printf("\nO segundo número é maior que o primeiro");
	if(a==b)
	printf("\nOs dois números são iguais");
	return 0;
}
