#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int hora, min;
	printf("Informe que horas s�o: ");
	scanf("%d",hora);
	printf("Informe que minutos s�o: ");
	scanf("%d",min);
	printf("J� se passaram %d minutos desde o in�cio do dia",(hora*60)+min);
	return 0;
}
