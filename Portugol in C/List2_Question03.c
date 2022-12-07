#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a;
	float b;
	printf("Digite um número: ");
	scanf("%d",&a);
	if(a>0)
	{
		b=(sqrt(a));
		printf("\n\t %.2f",b);
	}
	else
	{
		a=(pow(a,2));
		printf("\n\t %d",a);
	}
	return 0;
}
