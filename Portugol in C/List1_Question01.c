#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[10];
	int endereco, idade;
	printf("\nDigite seu nome: ");
	gets(nome);
	printf("Digite seu endere�o (n�mero da casa): ");
	scanf("%d", &endereco);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("\nSeu nome �: %s",nome);
	printf("\nSeu endereco �: %d",endereco);
	printf("\nSua idade �: %d",idade);
	return 0;
}
	
