
#include <iostream>
using namespace std;

int fatorial(int n){
	int F;
	F = 1;
	if (n==0 or n==1){
		return 1;
	}
	else {
		while(n>1){
			F = F*n;
			n--;
		}
		return F;
	}
}
int main (){
	int n;
	cin>>n;
	cout<<fatorial(n)<<endl;
}
