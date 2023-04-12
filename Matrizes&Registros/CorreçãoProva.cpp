#include <iostream>
using namespace std;
int main (){
	int k;
	char certo[8];
	for (int i = 0;i<8;i++)cin>>certo[i];
	char matriz[10][8];
	float notas[10];
	float n,media=0;
	for (int i=0;i<10;i++){
		k=0;
		n=0;
		for (int j=0;j<8;j++){
			cin>>matriz[i][j];
			if(matriz[i][j]==certo[k]){
				n+=12.5;
			}
			k++;
		}
		if(n>=60){
			media++;
		}
		notas[i]=n;
	}
	for (int i=0;i<10;i++)cout<<notas[i]<<endl;
	cout<<endl<<media*10<<endl;		
			
	return 0;
}
