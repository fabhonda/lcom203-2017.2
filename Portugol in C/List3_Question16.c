#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,i,primo;
	printf("Digite um número: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i>1 && n%i==0)
			{
			printf("\nNão é primo");
			return 0;
			}
	}
	printf("\nÉ primo");
	return 0;
}





