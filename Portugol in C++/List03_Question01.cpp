#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int zero=0, neg=0, pos=0;
	for(int i=0; i<255; i++)
	{
		cout << "\nDigite um número: ";
		cin >> i;
		if(i==0)
			zero=zero+1;
		if(i>0)
			pos=pos+1;
		if(i<0)
			neg=neg+1;
	}
	cout << "\nA quantidade de números iguais a 0 é: " << zero;
	cout << "\nA quantidade de números positivos é: " << pos;
	cout << "\nA quantidade de números negativos é: " << neg << endl;
	cout << "\n";
	system("PAUSE");
	return 0;
}
