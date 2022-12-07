#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,i;
	float n[10],media,soma,maior=0,menor=0;
	printf("Informe o número de alunos: ");
	scanf("%d",a);
	for(i=0;i<a;i++)
	{
		printf("Informe a nota do aluno %d: ",i+1);
		scanf("%f",&n[i]);
		if(i==0)
		{
			maior=n[i];
			menor=n[i];
		}
		if(n[i]>maior && n[i]>=0 && n[i]<=10)
			maior=n[i];
		if(n[i]<menor && n[i]>=0 && n[i]<=10)
			menor=n[i];
		if(n[i]<0 || n[i]>10)
			a--;
		
		soma+=n[i];
	}
	for(i=0;i<10;i++){
		printf("\nA nota do aluno %d é: %.2f",i+1,n[i]);
	}
	printf("\n");
	media=(soma/a);
	printf("\nA média das notas é: %.2f",media);
	printf("\nA maior nota é: %.1f",maior);
	printf("\nA menor nota é: %.1f",menor);
	return 0;
}
