#include <iostream>
using namespace std;
int main (){
	int n,p,q,cont=0;
	cin>>n;
	int xadrez[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>xadrez[i][j];
			if (xadrez[i][j]==1){
				p = i;
				q = j;
			}
		}
	}
	if (xadrez[p-2][q-1]==2){
		if ((p-2)>=0 and (q-1)>=0)
			cont++;
	}
	if (xadrez[p-1][q-2]==2){
		if ((p-1)>=0 and (q-2)>=0)
			cont++;
	}
	if (xadrez[p-2][q+1]==2){
		if ((p-2)>=0 and (q+1)<n)
			cont++;
	}
	if (xadrez[p-1][q+2]==2){
		if ((p-1)>=0 and (q+2)<n)
			cont++;
	}
	if (xadrez[p+1][q-2]==2){
		if ((p+2)<n and (q-2)>=0)
			cont++;
	}
	if (xadrez[p+2][q-1]==2){
		if ((p+2)<n and (q-1)>=0)
			cont++;
	}
	if (xadrez[p+2][q+1]==2){
		if ((p+2)<n and (q+1)<n)
			cont++;
	}
	if (xadrez[p+1][q+2]==2){
		if ((p+2)<n and (q+1)<n)
			cont++;
	}
	cout<<cont;
	return 0;
}
