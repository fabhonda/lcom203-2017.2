#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	printf("Informe a sua idade: ");
	scanf("%d",&idade);
	if(idade<16)
		printf("\nSua classe eleitoral �: n�o eleitor");
	if(idade>=18 && idade<65)
		printf("\nSua classe eleitoral �: eleitor obrigat�rio");
	if((idade>16 && idade<18) || idade>65)
		printf("\nSua classe eleitoral �: eleitor facultativo");
	return 0;
}
