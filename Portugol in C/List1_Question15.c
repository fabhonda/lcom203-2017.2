#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float p,i,valor;
	int n;
	printf("Informe o valor da aplica��o mensal: ");
	scanf("%f",&p);
	printf("Informe a taxa: ");
	scanf("%f",&i);
	printf("Informe o n�mero de meses: ");
	scanf("%d",&n);
	valor=(p*((pow(1+i,n)-1)/i));
	printf("\nO valor acumulado �: %.2f",valor);
	return 0;
}

