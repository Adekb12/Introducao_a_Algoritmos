#include <iostream>
using namespace std;
int main (){
	float a,b,c,d;
	cin>>a>>b>>c>>d;
	if (a<b and a<c and a<d){
		cout<<b + c + d<<endl;
	}
	else if (b<a and b<c and b<d){
		cout<<a + c + d<<endl;
	}
	else if (c<b and c<a and c<d){
		cout<<b + a + d<<endl;
	}
	else if (a<b and a<c and a<d){
		cout<<b + c + d<<endl;
	}
	else if (d<b and d<c and d<a){
		cout<<b + c + a<<endl;
	}
	return 0;
}
	
