#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float nad, chs;
	int dt, hdt;
	printf("Informe o n�mero de dias trabalhados na semana: ");
	scanf("%d",&dt);
	printf("Informe o n�mero de horas trabalhadas no dia: ");
	scanf("%d",&hdt);
	nad=((hdt*60)/50);
	chs=(dt*nad);
	printf("\nA carga hor�ria semanal �: %.2f horas semanais",chs);
	return 0;
}
