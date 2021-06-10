#include<iostream>
using namespace std;
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];
    int i = (low - 1); 
    for (int j = low; j <= high- 1; j++) 
    { 
        
        if (arr[j] <= pivot) 
        { 
            i++;  
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<arr[i];
    cout<<endl; 
     
} 

int main(){
    int A[] = {1,1,1,3,3,2,2,2,4,4,4,4};
    int n = sizeof(A)/sizeof(A[0]); 
    quickSort(A, 0, n-1); 
    cout<<"Sorted array: "; 
    printArray(A, n);  

     int best =1,bestLower =1,bestHigher =1; 
    for (int i=1; i<n; i++){
    if (A[i] == A[i-1]){
      bestLower++;;
      bestHigher++;;
    
    } else if (A[i] - 1 == A[i-1]){
      bestLower = bestHigher + 1;
      bestHigher = 1;
    
    } else if (A[i] + 1 == A[i-1]){
      bestHigher =bestLower+1;
      bestLower = 1;
    
    } else {
      bestLower = 1;
      bestHigher = 1;
    }
    if(best<bestLower)
            best = bestLower;
        if(best<bestHigher)
            best = bestHigher;
    }
        cout<<best;
    return 0; 

}