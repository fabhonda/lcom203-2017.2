#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	printf("Digite um n�mero: ");
	scanf("%d",&n);
	if(n>0)
		printf("\nO inverso do n�mero �: 1/%d",n);
	else
	{
		n*=(-1);
		printf("\nO absoluto do n�mero �: %d",n);
	}	
	return 0;

}
