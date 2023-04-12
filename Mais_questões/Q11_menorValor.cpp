#include <iostream>
using namespace std;
int MENOR(int vet[],int n, int g,int& p){
	if (n==g){
		p=g;
		return vet[g];
	}
	else {
		if (vet[g]<vet[n]){
			return MENOR(vet,n-1,g,p);
		}
		else{
			return MENOR(vet,n,g+1,p);
		}
	}
		
}
int main (){
	int n,g=0,m,p;
	cin>>n;
	int vet[n];
	for (int i=0;i<n;i++)cin>>vet[i];
	m = MENOR(vet,n-1,g,p);
	cout<<m<<" ";
	cout<<p<<endl;
	return 0;
}
