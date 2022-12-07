#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int voto=0, cand1=0, cand2=0, cand3=0, cand4=0, nulo=0, branco=0;
	cout << "\nSelecione um dos números para votar: ";
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
			cout << "VOTO INVÁLIDO!\n";	
	}
	
	cout << "\nO número de votos no candidato 1 é: " << cand1;
	cout << "\nO número de votos no candidato 2 é: " << cand2;
	cout << "\nO número de votos no candidato 3 é: " << cand3;
	cout << "\nO número de votos no candidato 4 é: " << cand4;
	cout << "\nO número de votos nulos é: " << nulo;
	cout << "\nO número de votos brancos é: " << branco << endl;
	system("PAUSE");
	return 0;
}
