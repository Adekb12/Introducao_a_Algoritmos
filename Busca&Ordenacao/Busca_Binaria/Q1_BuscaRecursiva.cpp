#include <iostream>
using namespace std;
int BUSCA(int vetor[],&c){
	
}
void insertionSort(int vetor[], int n){ 
    int i, pivo, j; 
    for (i = 1; i < n; i++){ 
        pivo = vetor[i]; 
        j = i - 1; 
        while (j >= 0 and vetor[j] > pivo)
        { 
            vetor[j + 1] = vetor[j]; 
            j--; 
        } 
        vetor[j + 1] = pivo; 
    } 
}
int main(){
    int N;
    cin>>N;
    int vetor[N];
    for (int i=0;i<N;i++)cin>>vetor[i];
    insertionSort(vetor, N);
    int elemento,c=0,p;
    cin>>elemento;
    pI = 0;
    pF = N-1;
  
    p = BUSCA(vetor,c,meio,pI,pF);
    cout<<p<<endl<<c<<endl;
    return 0; 
} 
}
