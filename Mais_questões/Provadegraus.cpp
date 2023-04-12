#include <iostream>
#include <cmath>
using namespace std;
int main (){
	
	float centimetros,metros,degraus;
	cin>>centimetros>>metros;
	degraus = (metros*100)/centimetros;
	cout<<ceil(degraus)<<endl;
	
	return 0;
}
