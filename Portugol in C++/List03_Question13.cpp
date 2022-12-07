#include <iostream>
using namespace std;
int main()
{
	int i=1;
	float s=0;
	while(i<11)
	{
		i++;
		if(i%2==0)
			s = s - i/(i^2);
		else
			s = s + i/(i^2);
	} 
	cout << "\nS: " << s;
	return 0;
}
