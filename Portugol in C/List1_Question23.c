#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float saldo, novosaldo;
	printf("Informe o saldo: ");
	scanf("%f",&saldo);
	novosaldo=(saldo+(saldo/100));
	printf("O novo saldo com reajuste de 1%% é: %.2f",novosaldo);
	return 0;
}
