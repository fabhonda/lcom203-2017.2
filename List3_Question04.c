#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void linha (int n);
int main(){
	setlocale(LC_ALL,"Portuguese");
	int voto,i,j,cand1=0,cand2=0,cand3=0,cand4=0,nulo=0,branco=0;
	for(i=0;i<10;i++)
	{
		printf("\nDigite o número do seu voto:\n\n");
		for(j=0;j<4;j++)
		{
		printf("[%d] Candidato %d\n",j+1,j+1);
		}
		printf("[5] Voto Nulo");
		printf("\n[6] Voto Branco\n");
		scanf("%d",&voto);
		while(voto<1 || voto>6)
		{
			linha(40);
			printf("\nERRO, INFORME UM VOTO VÁLIDO");
			printf("\nDigite o número do seu voto: ");
			scanf("%d",&voto);
		}
		switch(voto){
			case 1:
				cand1++;
				break;
			case 2:
				cand2++;
				break;
			case 3:
				cand3++;
				break;
			case 4:
				cand4++;
				break;
			case 5:
				nulo++;
				break;
			case 6:
				branco++;
				break;
		}		
	}
	printf("\nA quantidade de votos no candidato 1 é: %d",cand1);
	printf("\nA quantidade de votos no candidato 2 é: %d",cand2);
	printf("\nA quantidade de votos no candidato 3 é: %d",cand3);
	printf("\nA quantidade de votos no candidato 4 é: %d",cand4);
	printf("\nA quantidade de votos nulos é: %d",nulo);
	printf("\nA quantidade de votos brancos é: %d",branco);
	return 0;
}

void linha (int n)
	{
		int i;
		printf("\n");
		for(i=0; i<n; i++)
		printf("*");
	}

