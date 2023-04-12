#include <iostream>
#include <cmath>
using namespace std;
struct dados{
	float salario;
	int idade,filhos;
};
int main (){
	int n;
	float mediaS=0,mediaF=0,maior=-1,percentual=0;
	cin>>n;
	dados pessoa[n];
	for (int i=0;i<n;i++){
		cin>>pessoa[i].salario>>pessoa[i].idade>>pessoa[i].filhos;
		mediaS+=pessoa[i].salario;
		mediaF+=pessoa[i].filhos;
		if (pessoa[i].salario>maior)
			maior = pessoa[i].salario;
		if (pessoa[i].salario>1000)
			percentual++;
	}
	percentual = float(percentual*100)/n;	
	cout<<mediaS/n<<endl<<mediaF/n<<endl<<maior<<endl<<round(percentual)<<"%"<<endl;
	return 0;
}
