#include <iostream>
using namespace std;

int main()
{
	int x, y, z, a, b;
	float c, d, e;
	
	cout << "digite o codigo do estado de origem da carga: ";
	cin >> x;
	
	cout << "digite o peso do caminhao em toneladas: ";
	cin >> y;
	
	cout << "digite o codigo da carga: ";
	cin >> z; 
	
	a = y * 1000;
	
	if(z>=10 & x<=20){
	    b = a * 100;
	}
	if(z>20 & z<=30){
		b = a * 250;
	}
	if(z>30 & z<=40){
		b = a * 340;
	}
    switch(x){
    	case(1):
    	  c = 0.35;
    	break;
    	case(2):
    	  c = 0.25;
    	break;
    	case(3):
    	  c = 0.15;
    	break;
    	case(4):
    	  c = 0.05;
    	break;
	}
	
	e = c * b;
	
	d = e + b;
	
	cout << "o peso da carga em kg : "<< a <<endl;
	cout << "o preço da carga e: "<< b <<endl;
	cout << "o valor do imposto e: "<<e<<endl;
	cout << "o valor total transportado e: "<< d <<endl;
	
	system("pause");
	return 0;
				   
	
	}
