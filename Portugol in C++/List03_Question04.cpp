#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int voto=0, cand1=0, cand2=0, cand3=0, cand4=0, nulo=0, branco=0;
	cout << "\nSelecione um dos n�meros para votar: ";
	cout << "\n[1] Candidato 1";
	cout << "\n[2] Candidato 2";
	cout << "\n[3] Candidato 3";
	cout << "\n[4] Candidato 4";
	cout << "\n[5] Voto nulo";
	cout << "\n[6] Voto em branco\n\n";
	
	for(int i=0; i<10; i++)
	{
		cin >> voto;
		if(voto==1)
			cand1=cand1+1;
		if(voto==2)
			cand2=cand2+1;	
		if(voto==3)
			cand3=cand3+1;	
		if(voto==4)
			cand4=cand4+1;
		if(voto==5)
			nulo=nulo+1;	
		if(voto==6)
			branco=branco+1;
		if (voto<1 or voto>6)
			cout << "VOTO INV�LIDO!\n";	
	}
	
	cout << "\nO n�mero de votos no candidato 1 �: " << cand1;
	cout << "\nO n�mero de votos no candidato 2 �: " << cand2;
	cout << "\nO n�mero de votos no candidato 3 �: " << cand3;
	cout << "\nO n�mero de votos no candidato 4 �: " << cand4;
	cout << "\nO n�mero de votos nulos �: " << nulo;
	cout << "\nO n�mero de votos brancos �: " << branco << endl;
	system("PAUSE");
	return 0;
}
