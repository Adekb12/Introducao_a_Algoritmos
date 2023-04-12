#include <iostream>
using namespace std;
int main (){
	
	int numero,fatorial;
	numero = 0;
	fatorial = 1;
	cin>>numero;	
	while (numero!=1){
		while (numero>1){
			fatorial = fatorial*numero;
			numero--;
		}
		cout<<fatorial<<endl;
		fatorial = 1;
		cin>>numero;
	}
	return 0;
}
		
		
			
			
		
		
	

		
	
	
