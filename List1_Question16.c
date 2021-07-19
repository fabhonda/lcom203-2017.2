#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int tempo;
	float velocidade,distancia,litros_usados;
	printf("Informe o tempo gasto na viagem em horas: ");
	scanf("%d",&tempo);
	printf("Informe a velocidade média em km/h: ");
	scanf("%f",&velocidade);
	distancia=(tempo*velocidade);
	litros_usados=(distancia/12);
	printf("\nO tempo gasto na viagem foi: %d horas",tempo);
	printf("\nA velocidade média foi: %.2f km/h",velocidade);
	printf("\nA distancia foi de: %.2f km",distancia);
	printf("\nA quantidade de litros usados foi de: %.2f",litros_usados);
	return 0;
}
