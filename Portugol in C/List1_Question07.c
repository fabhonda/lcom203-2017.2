#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a;
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&a);
	printf("\nO n�mero �: %d",a);
	printf("\nSeu antecessor �: %d",a-1);
	printf("\nSeu sucessor �: %d",a+1);
	return 0;
	
}
