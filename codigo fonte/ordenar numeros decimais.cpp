#include <iostream>
using namespace std;

int main()
{
	float x = 0;
	float y = 0;
	
	cout << "usar o . para separar o numero inteiro do decimal" << endl;
	
	cout << "digite um numero: " << endl;
	cin >> x;
	
	cout << "digite outro numero: " << endl;
	cin >> y;
	
	if(x > y)
	{
		cout << "em ordem decresente fica: " << x << ", " << y << endl;
	}
	else
	{
		cout << "em ordem decresente fica: " << y << ", " << x << endl;
	}
	
	system("pause");
	return 0;
}
