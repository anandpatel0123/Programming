#include<iostream>
using namespace std;



// Sample Input 

// 6
// 1 4 4 4 5 3

// Sample Output 

// 4

int main(){
    int n =6,k=3;
    int arr[] = {1,4,4,3,1,3};

    int count=0;
    int max=0;
    int a[] = {0,0,0,0,0,0};

    for(int i=0;i<n;i++){
            if(arr[i]){
                a[arr[i]]++;
            }
    }

    for(int j=0;j<6;j++){
        if(max<a[j]){
            max = a[j];
        }
    }
    
    for(int k=0;k<6;k++){
        if(a[k] == max){
            cout<<k;
            return 0;
        }
    }
    

}
