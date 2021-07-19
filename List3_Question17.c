#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int i;
	float somap,somai,somat;
	for(i=1;i<51;i++)
	{
		if(i%2==0)
			somap+=(pow(2,i)/(pow(2,i)-1));
		else
			somai-=(pow(2,i)/(pow(2,i)-1));
	}
	somat=(somap+somai);
	printf("\t%.2f",somat);
	return 0;
}
