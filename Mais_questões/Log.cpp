#include <iostream>
using namespace std;
int LOG(int n,int cont){
	if (n==1){
		return 0;
	}
	else if (n==2){
		return cont+1;
	}
	else {
		cont++;
		return LOG(n/2,cont);
	}
}
int main (){
	int n,cont;
	cin>>n;
	cont = 0;
	cout<<LOG(n,cont)<<endl;
	return 0;
}
