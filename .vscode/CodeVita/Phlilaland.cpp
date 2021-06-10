#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    int *n;
    n=new int[t];
    for (int i=0;i<t;i++)
        n[i]=i;

    int sum=0;
    int *count;
    count = new int[t];
    int low=0;
    
    for(int i=0;i<t;i++){
        count[i]=0;
        for(int j=0;j<n[i];j++){
            if(n[i]<=0){
                break;
            }
            low=n[i]/2;
            sum=low*(low+1)/2;
            if(sum>n[i]){
                while(sum>n[i]){
                    low-=1;
                    sum=low*(low+1)/2;
                    if(sum==n[i]){
                        break;
                    }
                    else if(sum<n[i]){
                        low++;
                        break;
                    }
                        
                }
                break;
            }
            else if(sum<n[i]){
                while(sum<n[i]){
                    low+=1;
                    sum=low*(low+1)/2;
                }
                break;

            }

        }
        count[i]=low;
        low=0;
    }

    for(int j=0;j<t;j++)
        cout<<j<<" ---> "<<count[j]<<endl;
    
    return 0;

}