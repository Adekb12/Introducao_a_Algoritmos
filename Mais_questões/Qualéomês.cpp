#include <iostream>
using namespace std;
string mes(int n){
	if (n<1 or n>12)
		return "erro";
	else if (n==1)
		return "janeiro";
	else if (n==2)
		return "fevereiro";
	else if (n==3)
		return "marco";
	else if (n==4)
		return "abril";
	else if (n==5)
		return "maio";
	else if (n==6)
		return "junho";
	else if (n==7)
		return "julho";
	else if (n==8)
		return "agosto";
	else if (n==9)
		return "setembro";
	else if (n==10)
		return "outubro";
	else if (n==11)
		return "novembro";
	else 
		return "dezembro";		
}					
int main (){
	int n;
	cin>>n;
	cout<<mes(n)<<endl;
	return 0;
}
