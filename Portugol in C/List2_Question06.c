#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	char nome[8], sexo[9];
	char feminino[]="feminino";
	char feminino2[]="Feminino";
	printf("Digite seu nome: ");
	scanf("%s",nome);
	printf("Digite seu sexo: ");
	scanf("%s",sexo);
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	if((strcmp(sexo,feminino)==0) || (strcmp(sexo,feminino2)==0) && idade<25) 
	printf("\n\tACEITO");
	else
	printf("\n\tNÃO ACEITO");
	return 0;
}
