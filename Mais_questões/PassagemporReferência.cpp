#include <iostream>
using namespace std;
void soma(int x,int y,int& s){
	s = x + y;
}
int main (){
	int x,y,s;
	cin>>x>>y;
	soma(x,y,s);
	cout<<s<<endl;
	return 0;
}

