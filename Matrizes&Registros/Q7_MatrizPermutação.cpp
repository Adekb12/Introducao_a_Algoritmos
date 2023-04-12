#include <iostream>
using namespace std;
int main (){
	int matriz[4][4],zero,um;
	string aux = "sim";
	for (int i=0;i<4;i++){
		zero = 0;
		um = 0;
		for (int j=0;j<4;j++){
			cin>>matriz[i][j];
			if (matriz[i][j]==0)
				zero++;
			else if (matriz[i][j]==1)
				um++;
		}
		if (zero!=3 or um!=1)
			aux = "nao";
	}
	cout<<aux<<endl;
	return 0;
}
