#include <iostream>
using namespace std;

int main()
{
	char animal;
	int x;
	
	cout << "use [s] para sim e [n] para nao" << endl;
	cout << "ele e uma mamifero? ";
	cin >> animal;
	
	if(animal == 's')
	{
		cout << "ele e quadrupede? ";
		cin >> animal;
		
		if(animal == 's')
		{
			cout << "ele e carnivoro? ";
			cin >> animal;
			
			if(animal == 's')
			{
				cout << "e um leao.";
			}
			else
			{
				cout << "e um cavalo";
			}
		}
		else
		{
			cout << "ele e bipede? ";
			cin >> animal;
			
			if(animal == 's')
			{
				cout << "ele e onivoro? ";
				cin >> animal;
				
				if(animal == 's')
				{
					cout << "e um homem";
				}
				else
				{
					cout << "e um macaco";
				}
			}
			else
			{
				cout << "ele e voador? ";
				cin >> animal;
				
				if(animal == 's')
				{
					cout << "e um morcego";
				}
				else
				{
					cout << "e uma baleia";
				}
			}
		}
	}
	else
	{
		cout << "ele e uma ave? ";
		cin >> animal;
		
		if(animal == 's')
		{
			cout << "e terrestre?  ";
			cin >> animal;
			
			if(animal == 's')
			{
				cout << "ele e tropical?";
				cin >> animal;
				
				if(animal == 's')
				{
					cout << "ele e um avestruz";
				}
				else
				{
					cout << "ele e um pato";
				}
		}
			else
			{
				cout << "ele e nadador? ";
				cin >> animal;
				
				if(animal == 's')
				{
					cout << "e um pato";
				}
				else
				{
					cout << "e uma aguia";
				}	
			}
		}
		else
		{
			cout << "sao repteis com casco?";
			cin >> animal;
			
			if(animal == 's')
			{
				cout << "e uma tartaruga";
			}
			else
			{
				cout << "sao carnivoros?";
				cin >> animal;
				
				if(animal == 's')
				{
					cout << "e um crocodilo";
				}
				else
				{
					cout << "e uma cobra";
				}
			}
		}
		system("pause");
		return 0;
	}
}
