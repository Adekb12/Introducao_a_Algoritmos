#include <iostream>
using namespace std;
int FATORIAL(int f){
	if (f==0 or f==1)
		return 1;
	else 
		return f*FATORIAL(f-1);
}
void obterVetor(float *ptr,int N){
	for (int i=0;i<N;i++){
		ptr[i]= ((2*FATORIAL(i)) + i)/((i*i) + 1.75);
	}	
}
int main (){
	int N,M;
	cin>>N>>M;
	float *vetor = new float[N];
	float *ptr;
	ptr = vetor;
	obterVetor(ptr,N);
	for (int i=M;i<N;i++)cout<<vetor[i]<<endl;
	return 0;
}
