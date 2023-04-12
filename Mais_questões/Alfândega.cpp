#include <iostream>
using namespace std;
int main (){
	
	int codigoproduto,paisorigem;
	float peso,precobruto,imposto,valortotal;
	cin>>codigoproduto>>peso>>paisorigem;
	
	if(codigoproduto>=1 and codigoproduto<=4){
		precobruto = (peso*10000);
	}
	else if (codigoproduto>=5 and codigoproduto<=7){
		precobruto = (peso*25000);
	}
	else if (codigoproduto>=8 and codigoproduto<=10){
		precobruto = (peso*35000);
	}
	switch (paisorigem){
		case 1:
		imposto = 0;
		break;
		case 2:
		imposto = precobruto*0.15;
		break;
		case 3:
		imposto = precobruto*0.25;
		break;
	}
	valortotal = precobruto + imposto;
	
	cout.precision(1);
	cout.setf(ios::fixed);
	cout<<peso*1000<<endl<<precobruto<<endl<<imposto<<endl<<valortotal<<endl;
	return 0;
}
		
		
