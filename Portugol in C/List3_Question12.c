#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	int i;
	for(i=1000;i<2000;i++)
	{
		if(i%11==5)
			printf("\t%d",i);
	}
	return 0;
}
