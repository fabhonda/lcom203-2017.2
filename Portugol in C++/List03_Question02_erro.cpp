#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n, i, fat;
	cout << "\nDigite um número: ";
	cin >> n;
	fat=0;
	for(i=n; i>0; i--)
		fat = fat + (i * (i-1));

	cout << "\nO fatorial do número " << n << " é: " << fat;
	system("PAUSE");
	return 0;
}
