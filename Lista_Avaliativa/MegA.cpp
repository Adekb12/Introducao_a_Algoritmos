#include <iostream>
using namespace std;
struct registro{
	int d[6];
};
int* MAIOR(int v[],int q){
	registro mega[q];
	int h=0,soma,maior=0;
	int p=0;
	for (int i=0;i<q;i++){
		for (int j=0;j<6;j++){
			mega[i].d[j]=v[h];
			h++;
		}
	}
	for (int i=0;i<q;i++){
		soma=0;
		for (int j=0;j<6;j++){
			soma+=mega[i].d[j];
		}
		if (soma>maior){
			maior=soma;
			p = i;
		}
	}
	delete[]v;
	for (int i=0;i<6;i++){
		v[i]=mega[p].d[i];
	}
	return v;
}
int main (){
	int q;
	cin>>q;
	int *v = new int[q*6];
	for (int i=0;i<(q*6);i++)cin>>v[i];
	int *ptr;
	ptr = MAIOR(v,q);
	for (int i=0;i<6;i++){
		cout<<ptr[i]<<" ";
	}
	return 0;
}
