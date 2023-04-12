#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
	float raio,rad,x,y;
	int cadeiras,cont;
	cin>>raio>>cadeiras;
	rad = (2*3.14159265358)/cadeiras;
	cont = 0;
	cout.precision(2);
	cout.setf(ios::fixed);
	while (cont<cadeiras){
		x = raio*cos(cont*rad);
		y = raio*sin(cont*rad);
		cout<<x<<" "<<y<<endl;
		cont++;
	}
	return 0;
}
