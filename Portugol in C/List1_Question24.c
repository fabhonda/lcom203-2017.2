#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float peso_kg, peso_g, novopeso_g;
	printf("Informe o seu peso, em kg: ");
	scanf("%f",&peso_kg);
	peso_g=(((int)peso_kg)*1000);
	printf("\nO seu peso em gramas �: %.2f",peso_g);
	novopeso_g=(peso_g+((peso_g*7)/100));
	printf("\nSe voc� engordar 7%%, seu novo peso ser�: %.2f g",novopeso_g);
	return 0;
}
