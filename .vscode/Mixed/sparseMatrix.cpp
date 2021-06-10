#include<iostream>
using namespace std;

class element{
    public:
        int i,j,x;
        
};

class sparse{
    public:
    int m,n,num;
    class element *e;
};

void create(sparse *s){
    cout<<"Enter Dimensions"<<endl;
    cin>>s->m>>s->n;
    cout<<"Enter the No. of Non-Zero Elements"<<endl;
    cin>>s->num;
    s->e = new element[s->num];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<s->num;i++)
        cin>>s->e[i].i>>s->e[i].j>>s->e[i].x;
}

void display(sparse s){
    int k=0;
    for(int i=0;i<s.m;i++){
        for(int j=0;j<s.n;j++){
            if(i==s.e[k].i && j==s.e[k].j)
                cout<<s.e[k++].x<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}

int main(){
    sparse s;
    create(&s);
    display(s);

}