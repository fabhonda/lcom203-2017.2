#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int num=0, maior=0, menor=0;
	for(int i=0; i<10; i++)
	{
		cout << "\nDigite um n�mero: ";
		cin >> num;
		if(i==0)
			maior=num;
			menor=num;
		if(num>maior) 
			maior=num;
		if(num<menor)
			menor=num;
	}
	cout << "\nO maior valor �: " << maior;
	cout << "\nO menor valor �: " << menor << endl;
	system("PAUSE");
	return 0;
}
