#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n, maior, menor, i;
	for(i=0;i<10;i++)
	{
		printf("Digite o %d� n�mero: ",i+1);
		scanf("%d",&n);
		if(i==0)
		{
			maior=n;
			menor=n;
		}
		if(n>maior)
			maior=n;
		if(n<menor)
			menor=n;		
	}
	printf("\nO maior n�mero �: %d",maior);
	printf("\nO menor n�mero �: %d",menor);
	return 0;
}
