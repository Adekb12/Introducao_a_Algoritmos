#include <iostream>
#include <cmath>
using namespace std;
int main (){
	
	int opcao;
	double angulo1;
	cin>>opcao>>angulo1;
	switch (opcao){
		case 1:
			angulo1 = (angulo1*M_PI)/180;
			cout<<sin(angulo1)<<endl;
			break;
		case 2:
			angulo1 = (angulo1*M_PI)/180;
			cout<<cos(angulo1)<<endl;
			break;
		case 3:
			double angulo2;
			cin>>angulo2;
			cout<<angulo1*angulo2<<endl;
			break;
	}
	
	return 0;
}
			
