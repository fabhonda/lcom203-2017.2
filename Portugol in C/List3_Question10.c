#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float media_pares=0,media_impares=0,media_total=0;
	int pares=0,impares=0,n=0,i=0,soma_pares=0,soma_impares=0, soma_total=0;
	while(i<10)
	{
		printf("Digite o %d� n�mero: ",i+1);
		scanf("%d",&n);
		if(n%2==0)
		{
			pares++;
			soma_pares+=n;
		}
		if(n%2!=0)
		{
			impares++;
			soma_impares+=n;
		}
		i++;
	}
	media_pares=(soma_pares/pares);
	media_impares=(soma_impares/impares);
	soma_total=(soma_pares+soma_impares);
	media_total=(soma_total/i);
	printf("\nA quantidade de n�meros pares �: %d",pares);
	printf("\nA quantidade de n�meros impares �: %d",impares);
	printf("\nA m�dia dos n�meros pares �: %.2f",media_pares);
	printf("\nA m�dia total �: %.2f",media_total);
	return 0;
}
