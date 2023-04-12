#include <iostream>
using namespace std;
int main (){
	int h[100],m[100],i=0,x,hora,min,cont=0;
	cin>>h[0];
	while (h[i]>0){
		cin>>m[i];
		i++;
		cin>>h[i];
	}
	x = i*0.7;
	cin>>hora>>min;
	for (int j=0;j<(i-1);j++){
		if (h[i]<hora){
			cont++;
		}else if (h[i]==hora and m[i]<=min){
			cont++;
		}		
	}
	cout<<h[x]<<":"<<m[x]<<endl;
	float media;
	media = float(cont*100)/i;
	cout<<media<<endl;
	return 0;
}
