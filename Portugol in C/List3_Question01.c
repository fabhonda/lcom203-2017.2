#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i,n,zero=0,pos=0,neg=0;
	for(i=0;i<10;i++)
	{
		printf("Digite o %dº número: ",i+1);
		scanf("%d",&n);
		if(n<0)
			neg++;
		if(n>0)
			pos++;
		if(n==0)
			zero++;
	}
	printf("\nA quantidade de números positivos é: %d",pos);
	printf("\nA quantidade de números negativos é: %d",neg);
	printf("\nA quantidade de números iguais a zero é: %d",zero);
	return 0;
}
