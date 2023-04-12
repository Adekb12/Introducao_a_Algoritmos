#include <iostream>
using namespace std;
struct idade{
	string nome;
	int dia,mes,ano;
};
int msin (){
	int n,d,m,a;
	cin>>n;
	idade pessoa[n];
	for (int i=0;i<n;i++){
		cin>>pessoa[i].nome>>pessoa[i].dia>>pessoa[i].mes>>pessoa[i].ano;
	}
	cin>>d>>m>>a;
	for (int i=0;i<n;i++){
		cout<<pessoa[i].nome<<": ";
		if (pessoa[i].ano>a or (pessoa[i].ano==a and pessoa[i].mes>m) or (pessoa[i].ano==a and pessoa[i].mes==m and pessoa[i].dia>d))
			cout<<-1<<endl;
		else if (pessoa[i].ano-a<2 or (pessoa[i].ano-a==2 and m<pessoa[i].mes) or (pessoa[i].ano-a==2 and m==pessoa[i].mes and d>pessoa[i].dia)){
			if (pessoa[i].ano==a or (pessoa[i].ano-a==1 and pessoa[i].mes>m) or (pessoa[i].ano-a==1 and pessoa[i].mes==m and pessoa[i].dia>d))
				cout<<"0 ano"<<endl;
			else
				cout<<"1 ano"<<endl;	
		}else{
			if ((pessoa[i].mes>m) or (pessoa[i].mes==m and pessoa[i].dia>d))
				cout<<a-pessoa[i].ano-1<<" anos"<<endl;
			else 
				cout<<a-pessoa[i].ano<<" anos"<<endl;		
		}																							
	}
	return 0;
}

