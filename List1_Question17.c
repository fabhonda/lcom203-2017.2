#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int hora, min;
	printf("Informe que horas são: ");
	scanf("%d",hora);
	printf("Informe que minutos são: ");
	scanf("%d",min);
	printf("Já se passaram %d minutos desde o início do dia",(hora*60)+min);
	return 0;
}
