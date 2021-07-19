#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,i,intervalo1=0,intervalo2=0,intervalo3=0,intervalo4=0;
	for(i=0;i<10;i++)
	{
		printf("Digite o %dº número: ",i+1);
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
	printf("\nA quantidade de números no intervalo de 0 a 25 é: %d",intervalo1);
	printf("\nA quantidade de números no intervalo de 26 a 50 é: %d",intervalo2);
	printf("\nA quantidade de números no intervalo de 51 a 75 é: %d",intervalo3);
	printf("\nA quantidade de números no intervalo de 76 a 100 é: %d",intervalo4);
	return 0;
}
