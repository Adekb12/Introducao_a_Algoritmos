#include <iostream>
using namespace std;
int main (){
	int N;
	cin>>N;
	while (N!=0){
		if (N>=1 and N<=255){
            int cont,x,y,z,w,j,cont2;
            cont = 1;
            while (cont<=N){
                cont2 = 0;
                char resposta; 
                cin>>x>>y>>z>>w>>j;
                if (x<=127){
                    resposta = 'A';
                    cont2++;
                }
                if (y<=127){
                    resposta = 'B';
                    cont2++;
                }
                if (z<=127){
                    resposta = 'C';
                    cont2++;
                }
                if (w<=127){
                    resposta = 'D';
                    cont2++;
                }
                if (j<=127){
                    resposta = 'E';
                    cont2++;
                }
                if (cont2==1){
                    cout<<resposta<<endl;
                }
                else {
                    cout<<"*"<<endl;
                }
                cont++;
            }
            cin>>N;
        }
    }
    return 0;
}
