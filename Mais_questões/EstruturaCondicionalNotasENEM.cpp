#include <iostream>
using namespace std;
int main (){
	
	
	float matematica,natureza,linguagem,redacao,humanas,media;
	cin>>matematica>>natureza>>linguagem>>redacao>>humanas;
	media = (matematica*3 + natureza*2 + linguagem*2 + redacao*2 + humanas)/10; 
	if (redacao<200){
		cout<<"-1"<<endl;
	}
	else {
		cout<<media<<endl;
	}
	return 0;
}
