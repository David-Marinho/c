#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	char operacao;
	
	cout << "digite um numero: "<<endl;
	cin >> x;
	
	cout << "qual a operacao desejada?"<<endl;
	cout << "mutiplicacao [m], divisao [d], soma [s], subtacao [b]"<<endl;
	cin >> operacao;
	
	cout << "digite o segundo numero: "<<endl;
	cin >> y;
	
	switch(operacao){
		case 's':
			z = x + y;
		break;
		case 'b':
		    z = x - y;
		break;
		case 'd':
			z = x/y;
		break;
		case 'm':
			z = x * y;
		break;
	}
	cout << "o resultado e: "<<z<<endl;
	system("pause");
	return 0;
}
