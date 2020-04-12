#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	
	cout << "digite sua idade: ";
	cin >> x;
	
	if(x >= 18)
	{
		cout << "voce e maior de idade" << endl;
	}
	else
	{
		cout << "voce nao e maior de idade" << endl;
	}
	
	system ("pause");
	return 0;
}
