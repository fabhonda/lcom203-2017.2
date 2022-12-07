#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float frequencia, nota;
	printf("Informe sua nota: ");
	scanf("%f",&nota);
	printf("Informe sua frequência, em %%: ");
	scanf("%f",&frequencia);
	if(frequencia<75 || nota<3)
	{
		printf("\n\tREPROVADO");
		return 0;
	}
	if(frequencia>=75 && frequencia<=100 && nota<3)
	{
		printf("\n\tREPROVADO");
		return 0;
	}
	if(frequencia>=75 && frequencia<=100 && nota>=3 && nota<7)
	{
		printf("\n\tEXAME");
		return 0;
	}
	if(frequencia>=75 && frequencia<=100 && nota>=7 && nota<=100)
	{
		printf("\n\tAPROVADO");
		return 0;
	}
}
