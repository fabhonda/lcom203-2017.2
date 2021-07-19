#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,i,prod;
	for(i=0;i<10;i++)
	{
		printf("Digite o %dº número: ",i+1);
		scanf("%d",&n);
		if(i==0)
			prod=n;
		if(i>0 && n%2==0)
			prod*=n;
	}
	printf("\nO produtório dos números pares é: %d",prod);
	return 0;
}
