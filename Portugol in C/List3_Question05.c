#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i,n;
	float media=0, soma=0,pares=0;
	for(i=0;i<10;i++)
	{
		printf("Digite o %d� n�mero: ",i+1);
		scanf("%d",&n);
		if(n%2==0)
			soma+=n;
			pares++;
	}
	media=(soma/pares);
	printf("\nA m�dia dos n�meros pares �: %.2f",media);
	return 0;
}
