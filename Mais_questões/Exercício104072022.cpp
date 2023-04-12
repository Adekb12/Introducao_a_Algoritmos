#include <iostream>
using namespace std;
int main (){
	
	int valor,cont,soma1,soma2;
	float media;
	media = 0;
	cont = 0;
	soma1 = 0;
	soma2 = 0;
	do {
		cin>>valor;
		if (valor <=0){
			cont++;
			soma1+=valor;
			if (valor%2==0){
				soma2+=valor;
			}
		}
	}while (valor !=0);
	if (cont==0){
		cout<<media<<endl<<soma2;
	}
	else {
		cout<<"Media: "<<float(soma1)/cont<<endl<<"Soma: "<<soma2<<endl;
	}
	return 0;
}
		
	
	
