#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,i,intervalo1=0,intervalo2=0,intervalo3=0,intervalo4=0;
	for(i=0;i<10;i++)
	{
		printf("Digite o %d� n�mero: ",i+1);
		scanf("%d",&a);
		if(a>=0 && a<=25)
			intervalo1++;
		if(a>=26 && a<=50)
			intervalo2++;
		if(a>=51 && a<=75)
			intervalo3++;
		if(a>=76 && a<=100)
			intervalo4++;
	}
	printf("\nA quantidade de n�meros no intervalo de 0 a 25 �: %d",intervalo1);
	printf("\nA quantidade de n�meros no intervalo de 26 a 50 �: %d",intervalo2);
	printf("\nA quantidade de n�meros no intervalo de 51 a 75 �: %d",intervalo3);
	printf("\nA quantidade de n�meros no intervalo de 76 a 100 �: %d",intervalo4);
	return 0;
}
