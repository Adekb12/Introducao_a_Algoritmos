#include <iostream>
using namespace std;
int main (){
	int v[100],i=0,t,h,m,cont=0;
	cin>>v[0];
	while (v[i]>=0){
		i++;
		cin>>v[i];
	}
	t = (i*0.7);
	if (t%2==0)
		t--;
	cout<<t<<endl;
	cin>>h>>m;
	for (int j=0;j<i;j+=2){
		if(v[j]<h or (v[j]==h and v[j+1]<=m)){
			cont++;
		}
	}
	float media;
	media = float(cont*100)/(i/2);
	cout<<v[t-1]<<":"<<v[t]<<endl;
	cout.precision(4);
	cout.setf(ios::fixed);
	cout<<media<<endl;
	return 0;
}
