#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float peso, altura,imc;
	printf("Informe o seu peso em kg: ");
	scanf("%f",&peso);
	printf("Informe a sua altura: ");
	scanf("%f",&altura);
	imc=(peso/(altura*altura));
	if(imc>0 && imc<20)
		printf("\nVocê está abaixo do peso");
	if(imc>=20 && imc<25)
		printf("\nVocê está com peso normal");
	if(imc>=25 && imc<30)
		printf("\nVocê está com sobrepeso");
	if(imc>=30 && imc<40)
		printf("\nVocê está obeso");
	if(imc>40)
		printf("\nVocê está obeso mórbido");
	if(imc<0)
		printf("\nERRO. Informe um peso/altura válido(s)");
	return 0;
}
