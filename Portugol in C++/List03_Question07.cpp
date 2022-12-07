#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float n1, n2, n3, media;
	unsigned int cod;
	for(int i=0; i<10; i++)
	{
		cout << "\nDigite o código do aluno " << i+1 << " : ";
		cin >> cod;
		cout << "\nDigite a primeira nota: ";
		cin >> n1;
		cout << "\nDigite a segunda nota: ";
		cin >> n2;
		cout << "\nDigite a terceira nota: ";
		cin >> n3;
		if(n1>n2 and n1>n3)
			media+=((n1*4)+(n2*3)+(n3*3))/10;
		if(n2>n1 and n2>n3)
			media+=((n2*4)+(n1*3)+(n3*3))/10;
		if(n3>n1 and n3>n2)
			media+=((n3*4)+(n1*3)+(n2*3))/10;
		if(n3==n1 and n3==n2 and n1==n2)
			media+=((n1*4)+(n2*3)+(n3*3))/10;
		cout << "\n\nCódigo do aluno: " << cod;
		cout << "\nMédia do aluno: " << media;
		if(media>=5)
			cout << "\nAPROVADO!\n" << endl;
		else
			cout << "\nREPROVADO!\n" << endl;
	}
	system("PAUSE");
	return 0;
}
