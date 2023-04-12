#include <iostream>
using namespace std;
int main (){
	int numero,resto,primeiro,segundo,terceiro,quarto,divide2,divide3,divideambos;
	cin>>numero;
	primeiro = numero/1000;
	resto = numero%1000;
	segundo = resto/100;
	resto = resto%100;
	terceiro = resto/10;
	quarto = resto%10;
	divide2 = 0;
	divide3 = 0;
	divideambos = 0;
	if (primeiro%2==0){
		divide2++;
	}
	if (segundo%2==0){
		divide2++;
	}
	if (terceiro%2==0){
		divide2++;
	}
	if (quarto%2==0){
		divide2++;
	}
	if (primeiro%3==0){
		divide3++;
	}
	if (segundo%3==0){
		divide3++;
	}
	if (terceiro%3==0){
		divide3++;
	}
	if (quarto%3==0){
		divide3++;
	}
	if (primeiro%2==0 and primeiro%3==0){
		divideambos++;
	}
	if (segundo%2==0 and segundo%3==0){
		divideambos++;
	}
	if (terceiro%2==0 and terceiro%3==0){
		divideambos++;
	}
	if (quarto%2==0 and quarto%3==0){
		divideambos++;
	}
	cout<<divide2<<endl<<divide3<<endl<<divideambos<<endl;
	
	return 0;
}
