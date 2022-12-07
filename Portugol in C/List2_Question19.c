#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int mes;
	printf("Digite o número do mês: ");
	scanf("%d",&mes);
	switch(mes)	{
		case 1: 
			printf("\n\tJaneiro");
			break;
		case 2:
			printf("\n\tFevereiro");
			break;
		case 3: 
			printf("\n\tMarço");
			break;
		case 4: 
			printf("\n\tAbril");
			break;
		case 5: 
			printf("\n\tMaio");
			break;
		case 6:
			printf("\n\tJunho");
			break;
		case 7:
			printf("\n\tJulho");
			break;
		case 8:
			printf("\n\tAgosto");
			break;
		case 9:
			printf("\n\tSetembro");
			break;
		case 10: 
			printf("\n\tOutubro");
			break;
		case 11:
			printf("\n\tNovembro");
			break;
		case 12:
			printf("\n\tDezembro");
			break;
		default:
			printf("\nERRO. Digite um número válido de mês (1 a 12)");
			break;
	}
	return 0;
}
