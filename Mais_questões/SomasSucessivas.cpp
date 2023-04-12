#include <iostream>
using namespace std;
int Multiplicacao(int n,int m){
	if (m==0){
		return 0;
	}
	else if (m==1){
		return n;
	}
	else {
		return n + Multiplicacao(n,m-1);
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	cout<<Multiplicacao(n,m)<<endl;
	return 0;
}
