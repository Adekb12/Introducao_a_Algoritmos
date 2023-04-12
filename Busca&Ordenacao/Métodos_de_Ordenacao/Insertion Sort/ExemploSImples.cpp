#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
// Function to sort an array using 
// insertion sort
//é algoritmo estável
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
void printArray(int vetor[], int n) { 
    int i; 
    for (i = 0; i < n; i++) 
        cout << vetor[i] << " "; 
    cout << endl;
} 
int main() { 
    int N;
    cin>>N;
    int vetor[N];
    for (int i=0;i<N;i++)cin>>vetor[i];
    insertionSort(vetor, N); 
    printArray(vetor, N); 
    return 0; 
} 
