#include <iostream>
using namespace std;
class array{
    public:
    int a[10];
    int length;
};

//finding duplicate elements in a sorted array
void duplicateSorted(class array arr){
    int lastDuplicate =0;
    for(int i=0;i<arr.length;i++){
        if(arr.a[i]==arr.a[i+1] && arr.a[i]!=lastDuplicate){
            cout<<arr.a[i]<<" ";
            lastDuplicate = arr.a[i];
        }
    }
}

//find duplicate elements in unsorted array in O(n^2)
void duplicateUnsorted1(class array arr){
    int count;
    for(int i =0;i<arr.length-1;i++){
        count=1;
        if(arr.a[i]!= -1){
            for(int j =i+1;j<arr.length;j++){
                if(arr.a[i] == arr.a[j]){
                    count++;
                    arr.a[j]=-1;
                }
            }
            if(count>1)
                cout<<arr.a[i]<<" "<<count<<endl;
        }

    }

}

void duplicateUnsorted2(class array arr){
    int max = arr.a[0];
    for(int i=0;i<arr.length;i++){
        if(max<arr.a[i]){
            max=arr.a[i];
        }
    }
    int h[max]={0};
    for(int i=0;i<arr.length;){
        if(arr.a[i]==arr.a[++i]){
            h[arr.a[i]]++;
        }
    }

    for(int i=0;i<max;i++){
        if(h[i]>0)
            cout<<i<<" "<<h[i]<<endl;
    }
}

//find the pair of sum k (a+b=k) O(n^2)

void pairOfSum(class array arr,int k){
    int Pair1=0,Pair2=0;
    for(int i =0;i<arr.length-1;i++){
        for(int j =1;j<arr.length;j++){
            if(arr.a[i] + arr.a[j] == k && Pair1 != arr.a[i] && Pair2 != arr.a[i]  ){
                cout<<arr.a[i]<<" + "<<arr.a[j]<<" = "<<k<<endl;
                 Pair1 = arr.a[i];
                 Pair2 = arr.a[j];
            }
                 
        }
    }
}

//find the pair of sum k (a+b=k) O(n)

void pairofsum(class array arr,int k){
    int Pair1=0;
    int max = arr.a[0];
    for(int i=0;i<arr.length;i++){
        if(max<arr.a[i]){
            max=arr.a[i];
        }
    }

    int h[max]={0};
    for(int i=0;i<arr.length;i++){
        if(h[k-arr.a[i]] != 0 && arr.a[i] < k && Pair1 != arr.a[i]){
            cout<<arr.a[i]<<" + "<<k-arr.a[i]<<" = "<<k<<endl;
            Pair1 = arr.a[i];
        }
        h[arr.a[i]]++;
    }

}

//find the pair of sum k (a+b=k) in sorted list

void pairofsumSorted(class array arr,int k){
    int i=0,j=arr.length-1;
    while(i<j){
        if(arr.a[i]+arr.a[j]==k && arr.a[i] != 0 && arr.a[j] != 0){
            cout<<arr.a[i]<<" + "<<arr.a[j]<<" = "<<k<<endl;
            i++,j--;
        }
        else if(arr.a[i] == 0)
            i++;
        else if(arr.a[j] == 0)
            j--;
        else if(arr.a[i]+arr.a[j]<k){
            i++;
        }
        else
        {
            j--;
        }
        
    }
}

int main(){
    array ar = array{{1,2,8,8,8,9,10,15,15},10};
    // duplicateUnsorted2(ar);
    pairofsumSorted(ar,10);


}