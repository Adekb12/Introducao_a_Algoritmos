#include <iostream>
using namespace std;
float VERIFICA(int b,int h){
	return (h*100)/b;
}
int main (){
	int n,b,h,cont=1,adequada=0;
	cin>>n;
	while (cont<=n){
		cin>>b>>h;
		cout.precision(1);
		cout.setf(ios::fixed);
		cout<<VERIFICA(b,h)<<" ";
		if (VERIFICA(b,h)<=8){
			adequada++;
		}
		cont++;
	}
	cout<<endl;
	cout<<adequada;
	return 0;
}

