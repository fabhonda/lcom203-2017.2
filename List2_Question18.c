#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int regiao;
	char pergunta[3];
	char volta[]="sim";
	char ida[]="nao";
	printf("Deseja ir para qual regi�o?");
	printf("\n(1)Regi�o Norte");
	printf("\n(2)Regi�o Nordeste");
	printf("\n(3)Regi�o Centro-Oeste");
	printf("\n(4)Regi�o Sul\n");
	scanf("%d",&regiao);
	if(regiao<1 || regiao>4)
	{
		printf("\nErro. Informe uma regi�o v�lida");
		return 0;
	}
	printf("\nCom ida e volta? (Digite sim ou nao)\n");
	scanf("%s",pergunta);
	
	if(regiao==1 && (strcmp(pergunta,volta)==0))
	{
		printf("\nO valor de ida e volta para Regi�o Norte �: 900 reais");
		return 0;
	}		
	if(regiao==1 && (strcmp(pergunta,ida)==0))
	{
		printf("\nO valor de ida para Regi�o Norte �: 500 reais");
		return 0;
	}
	if(regiao==2 && (strcmp(pergunta,volta)==0))
	{
		printf("\nO valor de ida e volta para Regi�o Nordeste �: 650 reais ");
		return 0;
	}
	if(regiao==2 && (strcmp(pergunta,ida)==0))
	
	{
		printf("\nO valor de ida para Regi�o Nordeste �: 350 reais ");
		return 0;
	}
	if(regiao==3 && (strcmp(pergunta,volta)==0))
	{
		printf("\nO valor de ida e volta para Regi�o Centro Oeste �: 600 reais");
		return 0;
	}
	if(regiao==3 && (strcmp(pergunta,ida)==0))
	{
		printf("\nO valor de ida para Regi�o Centro Oeste �: 350 reais ");
		return 0;
	}
	if(regiao==4 && (strcmp(pergunta,volta)==0))
	{
		printf("\nO valor de ida e volta para Regi�o Sul �: 550 reais");
		return 0;
	}
	if(regiao==4 && (strcmp(pergunta,ida)==0))
	{
		printf("\nO valor de ida para Regi�o Sul �: 300 reais");
		return 0;
	}

}
