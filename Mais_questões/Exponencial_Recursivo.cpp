#include <iostream>
using namespace std;
int EXPONENCIAL(int k,int n){
	if (n==0){
		return 1;
	}
	else if (n==1){
		return k;
	}
	else {
		return k*EXPONENCIAL(k,n-1);
	}
}
int main (){
	int k,n;
	cin>>k>>n;
	cout<<EXPONENCIAL(k,n)<<endl;
	return 0;
}
