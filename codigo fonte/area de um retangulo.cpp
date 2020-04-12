#include <iostream>
using namespace std;

int main()
{
	float x = 0;
	float y = 0;
	float z = 0;
	
	cout << "qual e a altura? ";
	cin >> x;
	
	cout << "qual e a base? ";
	cin >> y;
	
	z = (x * y)/2;
	
	cout << "a area e: " << z << endl;
	
	system ("pause");
	return 0;
}
