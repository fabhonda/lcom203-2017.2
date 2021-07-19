#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int soma,i;
	for(i=1;i<11;i++)
	{
		if(i%2==0)
			soma-=(i/(pow(i,2)));
		else
			soma+=(i/(pow(i,2)));
	}
	printf("\n\t%d",soma);
	return 0;
}
