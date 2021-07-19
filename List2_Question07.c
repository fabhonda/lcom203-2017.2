#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int nascimento,atual,idade;
	printf("Informe seu ano de nascimento: ");
	scanf("%d",&nascimento);
	printf("Informe o ano atual: ");
	scanf("%d",&atual);
	if(nascimento>atual)
		printf("\n\tERRO");
	else
	{
		idade=(atual-nascimento);
		printf("\nVocê tem: %d anos",idade);
		return 0;
	}
}
