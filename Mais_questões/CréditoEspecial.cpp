#include <iostream>
using namespace std;
int main (){
	
	float saldomedio;
	cin>>saldomedio;
	cout.precision(2);
	cout.setf(ios::fixed);
	if (saldomedio<0){
		cout<<saldomedio<<endl<<"0"<<endl;
	}
	else if (saldomedio>=0 and saldomedio<200){
		cout<<saldomedio<<endl<<saldomedio*0.10<<endl;
	}
	else if (saldomedio>=200 and saldomedio<400){
		cout<<saldomedio<<endl<<saldomedio*0.15<<endl;
	}
	else if (saldomedio>=400 and saldomedio<800){
		cout<<saldomedio<<endl<<saldomedio*0.20<<endl;
	}
	else if (saldomedio>=800 and saldomedio<1600){
		cout<<saldomedio<<endl<<saldomedio*0.25<<endl;
	}
	else if(saldomedio>=1600){
		cout<<saldomedio<<endl<<saldomedio*0.30<<endl;
	}
	return 0;
}
