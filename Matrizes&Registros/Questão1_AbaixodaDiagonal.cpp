#include <iostream>
using namespace std;
int main (){
	int n,soma = 0;
	cin>>n;
	int matriz[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>matriz[i][j];
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if ((i+j)>=n){
				cout<<matriz[i][j]<<" ";
				soma+=matriz[i][j];
			}
		}
	}
	cout<<endl;
	cout<<soma<<endl;
	return 0;
}
