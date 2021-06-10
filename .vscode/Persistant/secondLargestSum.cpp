#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LargeSmallSum(int arr[], int length){
    int El;
    int Ol;
    if(length%2==0){
        El=(length/2);
        Ol=(length/2);
    }else{
        El=(length/2)+1;
        Ol=(length/2);
    }
    int ELarge[El];
    int OSmall[Ol];
    for(int i=0,j=0,k=0; i<length;i++){
        if(i%2==0){
            ELarge[k]=arr[i];
            k++;
        }
        else{
            OSmall[j]=arr[i];
            j++;
        }
    }
    
    sort(ELarge,ELarge+El);
    sort(OSmall,OSmall+Ol);
    int sum;
    sum=ELarge[El-2]+OSmall[1];
    return sum;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    cout<<LargeSmallSum(arr, n);
}
