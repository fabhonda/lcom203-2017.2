#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,i,primo;
	printf("Digite um n�mero: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i>1 && n%i==0)
			{
			printf("\nN�o � primo");
			return 0;
			}
	}
	printf("\n� primo");
	return 0;
}





