#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int mes;
	printf("Digite o n�mero do m�s: ");
	scanf("%d",&mes);
	switch(mes)	{
		case 1: 
			printf("\n\tJaneiro");
			break;
		case 2:
			printf("\n\tFevereiro");
			break;
		case 3: 
			printf("\n\tMar�o");
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
			printf("\nERRO. Digite um n�mero v�lido de m�s (1 a 12)");
			break;
	}
	return 0;
}
