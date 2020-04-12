#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	
	cout << "quando voce nasceu? ";
	cin >> x;
	
	y = 2020 - x;
	z = 2025 - x;
	
	cout << "voce tem " << y << " atualmente e tera " << z << " em 2025" << endl;
	
	system ("pause");
	return 0;
}
