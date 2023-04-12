#include <iostream>
using namespace std;
int main (){
	int x,y,z,cont;
	cin>>x>>y;
	cont = 0;;
	if (x<y){
		z = x;
		x = y;
		y = z;
	}
	z = x;
	while (z>=y){
		z = z-y;
		cont++;
	}
	cout<<x-(cont*y)<<endl<<cont<<endl;
	return 0;
}
