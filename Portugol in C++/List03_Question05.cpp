#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int num=0;
	float media=0;
	for(int i=0; i<400; i++)
	{
		cout << "\nDigite um número: ";
		cin >> num;
		if(num%2==0)
			media+=num;
	}
	cout << "\nA média dos números pares é: " << media << endl;
	system("PAUSE");
	return 0;
}
