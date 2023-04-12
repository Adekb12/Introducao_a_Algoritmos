#include <iostream>
using namespace std;
int main (){
	int n,cont1,triangular;
	cin>>n;
	cont1 = 0;
    triangular = n/2;
    while (triangular!=n and cont1<n){
		triangular = cont1*(cont1+1)*(cont1+2);
		cont1++;
	}
	if (triangular==n){
		cout<<"TRIANGULAR "<<cont1-1<<" "<<cont1<<" "<<cont1+1<<endl;
	}
	else {
		cout<<"NAO TRIANGULAR"<<endl;
	}
    return 0;
}
