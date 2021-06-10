#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i = 0; i<n-1;i++){
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
}

void printSort(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[]={7,2,1,5,4,9};
    bubbleSort(arr,6);
    printSort(arr,6);
}