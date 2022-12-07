#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	printf("Digite um número: ");
	scanf("%d",&n);
	if(n>0)
		printf("\nO inverso do número é: 1/%d",n);
	else
	{
		n*=(-1);
		printf("\nO absoluto do número é: %d",n);
	}	
	return 0;

}
