#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int regiao;
	char pergunta[3];
	char volta[]="sim";
	char ida[]="nao";
	printf("Deseja ir para qual região?");
	printf("\n(1)Região Norte");
	printf("\n(2)Região Nordeste");
	printf("\n(3)Região Centro-Oeste");
	printf("\n(4)Região Sul\n");
	scanf("%d",&regiao);
	if(regiao<1 || regiao>4)
	{
		printf("\nErro. Informe uma região válida");
		return 0;
	}
	printf("\nCom ida e volta? (Digite sim ou nao)\n");
	scanf("%s",pergunta);
	
	if(regiao==1 && (strcmp(pergunta,volta)==0))
	{
		printf("\nO valor de ida e volta para Região Norte é: 900 reais");
		return 0;
	}		
	if(regiao==1 && (strcmp(pergunta,ida)==0))
	{
		printf("\nO valor de ida para Região Norte é: 500 reais");
		return 0;
	}
	if(regiao==2 && (strcmp(pergunta,volta)==0))
	{
		printf("\nO valor de ida e volta para Região Nordeste é: 650 reais ");
		return 0;
	}
	if(regiao==2 && (strcmp(pergunta,ida)==0))
	
	{
		printf("\nO valor de ida para Região Nordeste é: 350 reais ");
		return 0;
	}
	if(regiao==3 && (strcmp(pergunta,volta)==0))
	{
		printf("\nO valor de ida e volta para Região Centro Oeste é: 600 reais");
		return 0;
	}
	if(regiao==3 && (strcmp(pergunta,ida)==0))
	{
		printf("\nO valor de ida para Região Centro Oeste é: 350 reais ");
		return 0;
	}
	if(regiao==4 && (strcmp(pergunta,volta)==0))
	{
		printf("\nO valor de ida e volta para Região Sul é: 550 reais");
		return 0;
	}
	if(regiao==4 && (strcmp(pergunta,ida)==0))
	{
		printf("\nO valor de ida para Região Sul é: 300 reais");
		return 0;
	}

}
