#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

template<typename T>
class treeNode{
    public:
    T data;
    vector<treeNode<T>*> child;

    treeNode(T data){
        this->data = data;
    }
};
void printTree(treeNode<int> *root){
    cout<<root->data<<" :";
    for(int i=0;i<root->child.size();++i){
        cout<<root->child[i]->data<<" ,";
    }
    cout<<endl;
    for(int i=0;i<root->child.size();i++){
        printTree(root->child[i]);
    }
}

treeNode<int> * inputLevelWise(){
    int rootData;
    cout<<"Enter Root data"<<endl;
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }
    treeNode<int> *root = new treeNode<int>(rootData);
    queue<treeNode<int> *> q;
    q.push(root);
    while(!q.empty()) {
        treeNode<int> *curr_node = q.front();
        q.pop();
        bool flag = true;
        while(flag){
            cout<<"Enter child of :"<<curr_node->data<<"-> ";
            int childData;
            cin>>childData;
            if(childData != -1){
            treeNode<int> *child = new treeNode<int>(childData);
            curr_node->child.push_back(child);
            q.push(child);
            }else{
                flag = false;
            }
        }
    }
    return root;
}

int countNode(treeNode<int> *root){
    if(root == NULL){
        return 0;
    }
    int count = 1;
    for (int i=0;i<root->child.size();i++){
        count += countNode(root->child[i]);
    }
    return count;
}

int height(treeNode<int>* root){
    int res = 0;
    for(int i=0;i<root->child.size();i++){
        int h = height(root->child[i]);
        if(h>res){
            res = h;
        }
    }
    return res + 1;
}

int main(){
    treeNode<int> *root = inputLevelWise();
    printTree(root);
    cout<<"No. Of Node -->"<<height(root);
}
