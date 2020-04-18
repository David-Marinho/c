#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	int x = 0;
	
	cout<<"qual o numero desejado";
	cin>>n;
	
	while(x<=n*10)
	{
		cout<<x<<"\n";
		x = x + n;
	}
}
