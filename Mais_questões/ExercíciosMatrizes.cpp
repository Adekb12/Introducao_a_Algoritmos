#include <iostream>
using namespace std;
int main (){
	int n;
	int **matriz;
	cin>>n;
	matriz = new int*[n];
	for (int i = 0;i<n;i++){
		matriz[i] = new int[n];
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>matriz[i][j];
		}
	}
	for (int i=0;i<n;i++){
		for (int j = 0;j<n;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for (int j=0;j<n;j++){
		for (int i = 0;i<n;i++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for (int i=0;i<n;i++){
		cout<<matriz[i][i]<<" ";
	}
	cout<<endl;
	cout<<endl;
	for (int i=0;i<n;i++){
		for (int j = 0;j<n;j++){
			if ((i+j)==(n-1)){
				cout<<matriz[i][j]<<" ";
			}
		}
	}
	cout<<endl;
	cout<<endl;
	int maior;
	maior = matriz[0][0];
	for (int i=0;i<n;i++){
		for (int j = 0;j<n;j++){
			if (matriz[i][j]>maior){
				maior = matriz[i][j];
			}
		}
	}
	cout<<"maior: "<<maior<<endl;
	cout<<endl;
	int m,menor;
	cin>>m;
	menor = maior;
	for (int j=0;j<n;j++){
		if (matriz[m][j]<menor){
			menor = matriz[m][j];
		}
	}
	cout<<"menor: "<<menor<<endl;
	cout<<endl;
	int k,cont;
	cont = 0;
	cin>>k;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (k==matriz[i][j])
			cont++;
		}
	}
	cout<<cont<<endl;
	return 0;
}
