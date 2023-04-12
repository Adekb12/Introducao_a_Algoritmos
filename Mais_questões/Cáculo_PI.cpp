#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int n,cont;
	double raiz,pi;
	cin>>n;
	raiz = sqrt(2);
	cont = 1;
	pi = sqrt(2)/2;
	while (cont<n){
		raiz = sqrt(2+raiz);
		pi = pi*(raiz/2);
		cont++;
	}
	cout<<2/pi<<endl;
	return 0;
}
