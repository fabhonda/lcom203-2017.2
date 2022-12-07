#include <iostream>
using namespace std;
int main() 
{
	int vet[1000], i;
	for(int i=0; i<1000; i++)
	{
		vet[i] = i+1000;
		if(vet[i] % 11== 5)
		{
			cout << vet[i] << "\t";
		}
	}
	cout << endl;
	return 0;
}
