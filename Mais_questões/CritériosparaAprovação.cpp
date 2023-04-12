#include <iostream>
using namespace std;
int main (){
	int matricula,notafinal,assiduidade;
	cin>>matricula>>notafinal>>assiduidade;
	matricula= matricula%100000000;
	matricula = matricula%10000000;
	matricula = matricula%1000000;
	matricula = matricula%100000;
	if ((notafinal >= 60 and assiduidade>=75)or(notafinal >= 70 and assiduidade>=65)){
		cout<<matricula<<"A"<<endl;
	}
	else {
		cout<<matricula<<"R"<<endl;
	}
	
	return 0;
}
	
	
	
