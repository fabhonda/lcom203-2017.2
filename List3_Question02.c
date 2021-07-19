#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i,n,fat=0;
	printf("Digite um número positivo: ");
	scanf("%d",&n);
	fat=0;
	for(i=n;i>1;i--)
	{
		if(fat==0)
			fat=(n*(n-1));
		else
		fat=fat*(i-1);
	}
	printf("\nO fatorial de %d é: %d",n,fat);
	return 0;
}
