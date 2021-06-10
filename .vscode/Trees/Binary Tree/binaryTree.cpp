#include<iostream>
#include<queue>
using namespace std;
class BinaryTreeNode{
    public:
      int data;
      BinaryTreeNode *left;
      BinaryTreeNode *right;
      BinaryTreeNode(int data){
          this->data = data;
          left = NULL;
          right = NULL;
      }      
};

void printTreeDetailed(BinaryTreeNode *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left != NULL){
        cout<<"L->"<<root->left->data<<",";
    }
    if(root->right != NULL){
        cout<<"R->"<<root->right->data<<",";
    }
    cout<<endl;
    printTreeDetailed(root->left);
    printTreeDetailed(root->right);
}

BinaryTreeNode *takeInput(){
    cout<<"Enter Root's Data :";
    int rootData;
    cin>>rootData;
    cout<<endl;
    if(rootData == -1){
        return NULL;
    }
    BinaryTreeNode *root = new BinaryTreeNode(rootData);
    root->left = takeInput();
    root->right = takeInput();
    return root;
}

BinaryTreeNode *takeInputLevelWise() {
    cout<<"Enter Root's Data :";
    int rootData;
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }
    BinaryTreeNode *root = new BinaryTreeNode(rootData);
    queue<BinaryTreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode *node = q.front();
        q.pop();
        cout<<"Enter Left Child of "<<node->data<<": ";
        int lChild;
        cin>>lChild;
        if(lChild != -1){
            BinaryTreeNode *leftChild = new BinaryTreeNode(lChild);
            node->left = leftChild;
            q.push(leftChild);
        }
        cout<<"Enter Right child of "<<node->data<<": ";
        int rChild;
        cin>>rChild;
        if(rChild != -1){
            BinaryTreeNode *rightChild = new BinaryTreeNode(rChild);
            node->right = rightChild;
            q.push(rightChild);
        }
    }
    return root;
}

int main(){
    // BinaryTreeNode *root = new BinaryTreeNode(10);
    // BinaryTreeNode *n1 = new BinaryTreeNode(20);
    // BinaryTreeNode *n2 = new BinaryTreeNode(30);
    // BinaryTreeNode *n3 = new BinaryTreeNode(40);
    // BinaryTreeNode *n4 = new BinaryTreeNode(50);

    // root->left = n1;
    // n1->left = n3;
    // n1->right = n4;
    // n4->left = n2;
    BinaryTreeNode *root = takeInputLevelWise();
    printTreeDetailed(root);
}