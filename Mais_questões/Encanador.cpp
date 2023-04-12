#include <iostream>
using namespace std;
int main (){
	
	 int coelhos, patos, pes, cabecas;

    cin >> pes >> cabecas;

    coelhos = pes/2;

    patos = pes%4;

    patos = patos/2;

    cout << patos << " " << coelhos;
	return 0;
}
