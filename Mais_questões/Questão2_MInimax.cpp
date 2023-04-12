#include <iostream>
using namespace std;
int main (){
	int maior,menor,m,n;
	int matriz[10][10];
	for (int i=0;i<10;i++){
		for (int j=0;j<10;j++){
			cin>>matriz[i][j];
		}
	}
	maior = matriz[0][0];
	m = 0;
	n = 0;
	for (int i=0;i<10;i++){
		for (int j=0;j<10;j++){
			if (matriz[i][j]>maior){
				maior = matriz[i][j];
				m = i;
			}
		}
	}
	menor = matriz[m][0];
	for (int j=0;j<10;j++){
		if (matriz[m][j]<menor){
			menor = matriz[m][j];
			n = j;
		}
	}
	cout<<menor<<endl<<m<<" "<<n<<endl;
	return 0;
}
