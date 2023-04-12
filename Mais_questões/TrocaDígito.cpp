#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int numero,cont,cont3,primeiro,ultimo,potencia,meio,aux,cont2;
	cin>>numero;
	cont = 1;
	cont3 = 1;
	while (cont3>0){
		cont3 = numero/(pow(10,cont));
		cont++;
	}
	cont-=1;
	cont2 = cont;
	primeiro = numero/(pow(10,cont));
	ultimo = numero%10;
	cout<<primeiro<<" "<<ultimo;

	return 0;
}
