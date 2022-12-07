#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,i;
	printf("Digite um número: ");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
			printf("\t%d",i);
	}
	return 0;
}
