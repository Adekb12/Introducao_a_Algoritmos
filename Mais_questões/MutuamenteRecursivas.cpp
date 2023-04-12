#include <iostream>
using namespace std;
int F(int x);
int H(int x);
int main (){
	int x;
	cin>>x;
	cout<<F(x)<<endl;
	return 0;
}
int F(int x){
	if (x==0){
		return 1;
	}
	else if (x>0 and x%2==0){
		return (2*H(x) + F(x-1));
	}
	else if (x>0 and x%2!=0){
		return (2*H(x) - F(x-1));
	}
	return 0;
}
int H(int x){
	if (x==0){
		return 0;
	}
	else if (x>0){
		return H(x-1) + F(x-1);
	}
	return 0;
}
	
