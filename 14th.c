#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insertionSort(int *A, int n){
    int key, j;
    
    for (int i = 1; i <= n-1; i++)
    {
        key = A[i];
        j = i-1;
        
        while(j>=0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main()
{
   
    
    int A[] = {55,76,34,32,48,27,22,33,99,13,19,9,4};
    int n = 13;
    printArray(A, n);
    insertionSort(A, n);
    printArray(A, n);
    return 0;
}
