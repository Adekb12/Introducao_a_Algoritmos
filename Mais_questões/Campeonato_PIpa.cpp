#include <iostream>
using namespace std;
int main (){
	int dia;
	float taxa,total;
	char categoria;
	dia = 1;
	total = 0;
	cin>>taxa>>dia>>categoria;
	while (dia>0){
		if (dia>=22 and dia<=31){
			if (categoria=='I'){
				total += 0.7*taxa;
			}
			else if (categoria=='E'){
				total += 0.85*taxa;
			}
		}
		else if (dia>=1 and dia<=6){
			if (categoria=='I'){
				total += 0.9*taxa;
			}
			else if (categoria=='E'){
				total += 0.95*taxa;
			}
		}
		cin>>dia>>categoria;
	}
	cout<<total<<endl;
	return 0;
}
