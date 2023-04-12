#include <iostream>
using namespace std;
int main (){
	float cx1,cy1,cx2,cy2,ponto,tmy,tmx,k,inter;
	char reta;
	cin>>cx1>>cy1>>cx2>>cy2>>reta>>ponto;
	tmx = cx2-cx1;
	tmy = cy2-cy1;
	if (reta=='x'){
		k = ponto - cx1;
		inter = ((k*tmy)/tmx)+cy1;
		if (tmx==0 or (cx2>cx1 and (ponto>cx2 or ponto<cx1)) or (cx1>cx2 and (ponto>cx1 or ponto<cx2))){
			cout<<"nenhuma"<<endl;
		}
		else {
			cout<<inter<<endl;
		}
	}
	else if (reta=='y'){
		k = tmy - (ponto - cy1);
		inter = ((k*tmx)/tmy)+cx1;
		if (tmy==0 or (cy2>cy1 and (ponto>cy2 or ponto<cy1)) or (cy1>cy2 and (ponto>cy1 or ponto<cy2))){
			cout<<"nenhuma"<<endl;
		}
		else {
			cout<<inter<<endl;
		}
	}
	return 0;
}
