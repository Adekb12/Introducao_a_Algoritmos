#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
//função de troca
//algoritmo não estável
void swap(int *xp, int *yp){
    int aux = *xp;
    *xp = *yp;
    *yp = aux;
}
void selectionSort(int vetor[], int n){
    int i, j, menor;
    for (i = 0; i < n-1; i++){
       // Encontra o menor elemento do vetor
        menor = i;
        for (j = i+1; j < n; j++){
        if (vetor[j] < vetor[menor])
            menor = j;
		}
        // Troca o menor elemento encontrado com o primeiro elemento
        if(menor==i)
            swap(&vetor[menor], &vetor[i]);
    }
}
 
//escreve o vetor
void printArray(int vetor[], int size){
    int i;
    for (i=0; i < size; i++)
        cout << vetor[i] << " ";
    cout << endl;
}
 
int main(){
	int n;
	cin>>n;
    int vetor[n];
    for (int i=0;i<n;i++)cin>>vetor[i];
    selectionSort(vetor, n);
    printArray(vetor, n);
    return 0;
}
