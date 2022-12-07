#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i,n;
	float media=0, soma=0,pares=0;
	for(i=0;i<10;i++)
	{
		printf("Digite o %dº número: ",i+1);
		scanf("%d",&n);
		if(n%2==0)
			soma+=n;
			pares++;
	}
	media=(soma/pares);
	printf("\nA média dos números pares é: %.2f",media);
	return 0;
}
