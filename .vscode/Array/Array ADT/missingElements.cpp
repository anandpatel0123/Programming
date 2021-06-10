#include<iostream>
using namespace std;

class element{
    public:
        int a[10];
        int length;
};

// Method 1
int missingElementSorted(class element ar){
    int sum = 0;
    for(int i=0;i<ar.length;i++){
        sum += ar.a[i];
    }
    int s ;
    s= ((ar.a[ar.length-1]+1)*ar.a[ar.length-1])/2;
    return s-sum;
}

//Method 2

int missingElementSorted2(class element ar){
    int l = ar.a[0];
    int h = ar.a[ar.length-1];

    int diff = l-0;
    for(int i=0;i<ar.length;i++){
        if(ar.a[i]-i != diff){
            return i+diff;
        }
    }
    return 0;

}

//Multiple Missing elements
void multipleMissingElementssorte(class element ar){
    int l = ar.a[0];
    int h = ar.a[ar.length-1];
    int diff = l-0;
    for(int i=0;i<ar.length;i++){
        if(ar.a[i]-i != diff){
            while(diff<ar.a[i]-i){
                cout<<i+diff<<" ";
                diff++;
            }
        }
    }
}

//missing elemetns in Unsorted List

void missingElementsUnsorted(class element ar){
    int max = ar.a[0];
    for(int i=0;i<ar.length;i++){
        if(max<ar.a[i]){
            max=ar.a[i];
        }
    }

    int l[max]={0};
    for(int j=0;j<ar.length;j++){
        l[ar.a[j]]++;
    }
    for(int k=0;k<=max;k++){
        if(l[k]==0)
            cout<<k<<" ";
    }
}


int main(){
    element arr = element{{15,10,1,5,4,6,8,11,9,8},10};
   // multipleMissingElementssorte(arr);
   missingElementsUnsorted(arr);


}