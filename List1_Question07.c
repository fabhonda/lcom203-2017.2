#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a;
	printf("Digite um número inteiro: ");
	scanf("%d",&a);
	printf("\nO número é: %d",a);
	printf("\nSeu antecessor é: %d",a-1);
	printf("\nSeu sucessor é: %d",a+1);
	return 0;
	
}
