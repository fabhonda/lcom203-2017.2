#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i,n,zero=0,pos=0,neg=0;
	for(i=0;i<10;i++)
	{
		printf("Digite o %d� n�mero: ",i+1);
		scanf("%d",&n);
		if(n<0)
			neg++;
		if(n>0)
			pos++;
		if(n==0)
			zero++;
	}
	printf("\nA quantidade de n�meros positivos �: %d",pos);
	printf("\nA quantidade de n�meros negativos �: %d",neg);
	printf("\nA quantidade de n�meros iguais a zero �: %d",zero);
	return 0;
}
