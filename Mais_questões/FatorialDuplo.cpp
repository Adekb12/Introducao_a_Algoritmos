#include <iostream>
using namespace std;
int FatorialDuplo(int N){
	if (N==0 or N==1){
		return 1;
	}
	else {
		return (N*FatorialDuplo(N-2));
	}
}	
int main (){
	int N;
	cin>>N;
	cout<<FatorialDuplo(N)<<endl;
	return 0;
}
