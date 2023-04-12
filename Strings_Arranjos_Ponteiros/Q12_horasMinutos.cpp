#include <iostream>
using namespace std;
void horasMinutos(int mnts,int *h,int *m){
	*h = mnts/60;
	*m = mnts%60;
}
int main (){
	int mnts;
	cin>>mnts;
	int h,m;
	horasMinutos(mnts,&h,&m);
	cout<<h<<endl<<m<<endl;
	return 0;
}
