#include<iostream>
using namespace std;

int main()
{
	
	
	char r;
	char n[10];
	while(r!='n')
	{
		cout << "qual o seu nome? ";
		cin >> n;
	
		cout << "prazer conhercer lo(a) "<<n;
	
		cout << "deseja repetir o programa?[s] ou [n] ";
		cin >> r;
	}
	system("pause");
	return 0;
}   
