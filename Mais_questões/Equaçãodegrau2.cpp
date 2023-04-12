//Achar as raízes de uma equação do segundo grau:
#include <iostream>
#include <cmath>
using namespace std;
int main () {
	float a,b,c,delta,raiz,x1,x2;
	cin>>a>>b>>c;
	delta = pow(b,2)+(-4)*a*c;
	
	if (delta<0)
	{
		cout<<"nenhuma raiz";
	}
	else
	{
		raiz = sqrt(delta);
		x1 = (-b - raiz)/2*a;
		x2 = (-b + raiz)/2*a;
	cout<<x1<<"\t"<<x2<<endl; 
	}
	return 0;
}

