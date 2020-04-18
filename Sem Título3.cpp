#include<iostream>
using namespace std;

int main()
{	int x = 0;
	int y = 0;
	int soma = 0;
	
	cout << "digite um numero: ";
	cin >> x;
	
	cout << "digite outro numero: ";
	cin >> y;
	
	while(x<=y)
	{
		if(x%2==1)
		{
			soma = soma+x;
		}
		x++;
	}
	cout<<soma;
}
