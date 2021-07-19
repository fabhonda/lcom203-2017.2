#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float altura,pesoid;
	char sexo[9];
	char sexo1[]="masculino";
	char sexo2[]="feminino";
	char sexo3[]="Masculino";
	char sexo4[]="Feminino";
	printf("Informe seu sexo: ");
	scanf("%s",sexo);
	printf("Informe a sua altura: ");
	scanf("%f",&altura);
	if(strcmp(sexo1,sexo)==0 || strcmp(sexo3,sexo)==0)
	{
		pesoid=((72.7*altura)-58);
		printf("\nSeu peso ideal é: %.2f kg",pesoid);
		return 0;
	}
	if(strcmp(sexo2,sexo)==0 || strcmp(sexo4,sexo)==0)
	{
		pesoid=((62.1*altura)-44.7);
		printf("\nSeu peso ideal é: %.2f kg",pesoid);
		return 0;
	}
	else
		printf("\nERRO, INFORME UM SEXO VÁLIDO.");
	return 0;
}
