#include <iostream>
#include <locale>
using namespace std;
void linha(int n);
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int itv1=0, itv2=0, itv3=0, itv4=0, num;
	cout << "\nDigite 10 n�meros de 1 a 100: \n\n";
	for(int i=0; i<10; i++)
	{
		cout << i+1 << "� n�mero: ";
		cin >> num;
		if(num>0 and num<=25)
			itv1+=1;
		if(num>25 and num<=50)
			itv2+=1;
		if(num>50 and num<=75)
			itv3+=1;
		if(num>75 and num<=100)
			itv4+=1;
			while(num<0 or num>100)
			{
				cout << "\n\nERRO! Digite um n�mero maior que zero e menor que 100\n";
				linha(53);
				cout << "\n";
				cout << i+1 << "� n�mero: ";
				cin >> num;
				if(num>0 and num<=25)
					itv1+=1;
				if(num>25 and num<=50)
					itv2+=1;
				if(num>50 and num<=75)
					itv3+=1;
				if(num>75 and num<=100)
					itv4+=1;
			}
	}
	cout << "\n\nA quantidade de n�meros entre 0 e 25 �: " << itv1;
	cout << "\nA quantidade de n�meros entre 26 e 50 �: " << itv2;
	cout << "\nA quantidade de n�meros entre 51 e 75 �: " << itv3;
	cout << "\nA quantidade de n�meros entre 76 e 100 �: " << itv4 << endl;
	return 0;
}

void linha(int n)
{
	for(int j=0; j<n; j++)
	cout << '*';
}
