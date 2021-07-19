#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,j;
	for(i=0;i<8;i++)
	{
		printf("\n$");
		for(j=0;j<i;j++)
			printf("$");
	}
	return 0;
}
