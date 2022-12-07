#include <iostream>
#include <locale>
int main()
{
	cout << "\nDigite 10 números inteiros e positivos: \n"
	for(int i=0; i<10; i++)
	{
		cout << i+1 << "\nº número: ";
		cin >> num;
		if(num%2==0 and num>0)
			prod*=num;
			
	}
	cout << "\n\nO produto dos números pares é: " << prod;
	return 0;
}
