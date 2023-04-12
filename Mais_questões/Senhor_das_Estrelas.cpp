#include <iostream>
using namespace std;
int main (){
	int dia,hora,minuto,duracao;
	cin>>dia>>hora>>minuto>>duracao;
	if ((minuto+duracao)>=60){
		hora += (minuto+duracao)/60;
		minuto = (minuto+duracao)%60;
	}
	if (hora>=24){
		dia += hora/24;
		hora = hora%24;
	}
	cout<<dia<<" "<<hora<<" "<<minuto<<endl;
	return 0;
}
