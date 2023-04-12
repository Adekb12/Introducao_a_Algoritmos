#include <iostream>
using namespace std;
int main (){
	int N;//maior que 2
	cin>>N;
	int matriz[N][N] = {{0}};
	matriz[0][0]=1;
	matriz[0][1]=0;
	for (int i = 1;i<N;i++){
		for (int j=0;j<=i;j++){
			if (j==0){
				matriz[i][j]=1;
			}else{
				matriz[i][j]=matriz[i-1][j-1] + matriz[i-1][j];
			}
		}
	}
	for (int i=0;i<N;i++){
		for (int j=0;j<=i;j++)cout<<matriz[i][j]<<" ";
		cout<<endl;
	}		
	return 0;
}
