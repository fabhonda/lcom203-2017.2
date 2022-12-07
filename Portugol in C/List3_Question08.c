#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n, i;
	printf("Digite um número: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n%dx%d = %d",i+1,n,(i+1)*n);
		
	}
	return 0;
}

