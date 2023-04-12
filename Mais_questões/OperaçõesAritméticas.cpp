#include <iostream>
using namespace std;
int main (){
	
	float A,B;
	int X;
	cin>>A>>B>>X;
	
	if (X<1 or X>4){
		cout<<"ERRO"<<endl;
	}
	else {
		switch (X){
			case 1:
			cout<<(A+B)/2;
			break;
			case 2:
			if (A>=B){
				cout<<A-B<<endl;
			}
			else {
				cout<<B-A<<endl;
			}
			break;
			case 3:
			cout<<A*B<<endl;
			break;
			case 4:
			if (B==0){
				cout<<"ERRO"<<endl;
			}
			else {
				cout<<A/B<<endl;
			}
			break;
		}
	}
	
	return 0;
}
			
		
