#include<iostream>
using namespace std;

void Merge(int arr[], int start,int middle, int end){
    //length of left and right arary
    int arr1 = middle - start +1;
    int arr2 = end - middle;

    //temp left array and right array
    int left[arr1], right[arr2];
    for(int i=0; i<arr1; i++){
        left[i] = arr[start+i];
    }
    for(int j =0;j<arr2; j++){
        right[j] = arr[middle+1+j];
    }

    int l=0,r=0,k=start;
    //compare and copy to the original array
    while(l < arr1 && r < arr2){
        if(left[l] <= right[r]){
            arr[k] = left[l];
            l++;
        }
        else{
            arr[k] = right[r];
            r++;
        }
        k++;
    }

    //copy rest of the values
    while(l < arr1){
        arr[k] = left[l];
        l++;
        k++;
    }

    //copy rest of the values
    while(r < arr2){
        arr[k] = right[r];
        r++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end){
    if(start >= end){
        return;
    }
    else{
        int middle = (start + end)/2;
        mergeSort(arr,start,middle);
        mergeSort(arr,middle+1,end);

        Merge(arr,start,middle,end);
    }
}

int main(){
    int arr[] = {4,7,1,9,8,3,2};
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr,0,6);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
}