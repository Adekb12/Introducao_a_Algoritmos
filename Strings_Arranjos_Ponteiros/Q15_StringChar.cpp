#include <iostream>
#include <cstring>
using namespace std;
int main (){
	int tam1,tam2,j=0;
	string pv1;
	getline(cin,pv1);
	tam1 = pv1.size();
	string pv2;
	getline(cin,pv2);
	tam2 = pv2.size();
	char *conca = new char[tam1+tam2];
	for (int i=0;i<tam1;i++){
		conca[i]=pv1[i];
	}
	for (int i=tam1;i<(tam1+tam2);i++){
		conca[i]=pv2[j];
		j++;
	}
	for (int i=0;i<(tam1+tam2);i++){
		cout<<conca[i];
	}
	return 0;
}
