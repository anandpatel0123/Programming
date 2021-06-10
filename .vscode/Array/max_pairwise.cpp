#include<iostream>
using namespace std;

long maxPairwise(int n,int a[]){
    
    int max_index1 = -1;
    int max_index2 = -1;

    for(int i=0;i<n;++i){
        if(max_index1 == -1 || a[i]>a[max_index1])
            max_index1 = i;
    }

    for(int j=0;j<n;++j){
        if((a[j] != a[max_index1]) && ((max_index2 == -1) || a[j]>a[max_index2]))
                max_index2=j;
    }

    return a[max_index1]*a[max_index2];
}

int main(){
    int n;
    cin>>n;
    int a[n] ;
    cout<<"Enter "<<n<<" Numbers :"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<maxPairwise(n,a);

}