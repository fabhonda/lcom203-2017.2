#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float vha,sb;
	int chs;
	printf("Informe o valor da hora aula: ");
	scanf("%f",&vha);
	printf("Informe a carga hor�ria semanal: ");
	scanf("%d",chs);
	sb=(vha*chs*5,25);
	printf("O valor do sal�rio base �: %f reais",sb);
	return 0;
}
