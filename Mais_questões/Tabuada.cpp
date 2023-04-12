#include <iostream>
using namespace std;
int main (){
	
	int n, cont;
	n = 2;
	cont = 1;
	while (n<=10){
		while(cont<=10){
			cout<<n<<" x "<<cont<<" = "<<n*cont<<endl;
			cont++;
		}
		n++;
		cont = 1;
	}
	
	return 0;
}
