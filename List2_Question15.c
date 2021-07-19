#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	printf("Informe sua idade: ");
	scanf("%d",&idade);
	if(idade>0 && idade<5)
		printf("\nVocê não está em nenhuma categoria");
	if(idade>=5 && idade<=7)
		printf("\nCategoria Idade Infantil A");
	if(idade>=8 && idade<=10)
		printf("\nCategoria Idade Infantil B");
	if(idade>=11 && idade<=13)
		printf("\nCategoria Idade Juvenil A");
	if(idade>=14 && idade <=17)
		printf("\nCategoria Idade Juvenil B");
	if(idade>=18)
		printf("\nCategoria Sênior");
	if(idade<0)
		printf("\nERRO. Informe uma idade válida");
	return 0;
}
