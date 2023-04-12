#include <iostream>
using namespace std;
int main (){
	
	int codigo,quantidade,cont = 0;
	float total = 0;
	codigo = 0;
	while (codigo!=-1){
		cin>>codigo;
		if (codigo!=-1){
			cin>>quantidade;
			
			switch (codigo){
			case 1:
				total = total + quantidade*3.00;
				cont = cont + quantidade;
				break;
			case 2:
				total = total + quantidade*2.50;
				cont = cont + quantidade;
				break;
			case 3:
				total = total + quantidade*4.50;
				cont = cont + quantidade;
				break;
			case 4:
				total = total + quantidade*8.00;
				cont = cont + quantidade;
				break;
			}
		}	
	}
	cout<<cont<<endl<<total<<endl;
	return 0;
}
	
		
