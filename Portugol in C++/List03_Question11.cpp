#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int num, prod;
	cout << "\nDigite 10 n�meros inteiros e positivos: \n";
	for(int i=0; i<10; i++)
	{
		cout << i+1 << "� n�mero: ";
		cin >> num;
		if(i==0)
		prod=num;
		if(num%2==0 and num>0)
			prod*=num;
	}
	cout << "\n\nO produto dos n�meros pares �: " << prod << endl;
	return 0;
}
