#include <iostream>
using namespace std;
int main (){
	float matriz[4][4];
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			cin>>matriz[i][j];
		}
	}
	int t;
	cin>>t;
	int v[t];
	for (int i=0;i<t;i++)cin>>v[i];
	float soma = 0;
	for (int i=0;i<(t-1);i++){
		soma+=matriz[v[i]][v[i+1]];
	}
	cout<<soma<<endl;
	return 0;
}
