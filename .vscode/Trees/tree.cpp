#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data)
    {
        this->data = data;
    }
};

TreeNode<int> *takeInputLevelWise()
{
    int rootData = 0;
    cout << "Enter data" << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int> *> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter num of children: " << front->data << endl;
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter " << i << "th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

int getNodeCount(TreeNode<int> *root)
{
    int res = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        res += getNodeCount(root->children[i]);
    }
    return res;
}

TreeNode<int> *takeInput()
{
    int rootData = 0;
    cout << "Enter data" << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    int n;
    cout << "Enter num of childers" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }

    return root;
}

template <typename T>
void printTree(TreeNode<T> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ", ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

int main()
{
    TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *A = new TreeNode<int>(2);
    TreeNode<int> *B = new TreeNode<int>(3);
    TreeNode<int> *C = new TreeNode<int>(4);
    TreeNode<int> *D = new TreeNode<int>(5);

    root->children.push_back(A);
    root->children.push_back(B);
    root->children.push_back(C);
    A->children.push_back(D);

    TreeNode<int> *E = new TreeNode<int>(6);
    TreeNode<int> *F = new TreeNode<int>(7);
    TreeNode<int> *G = new TreeNode<int>(8);

    A->children.push_back(E);
    D->children.push_back(F);
    F->children.push_back(G);

    //TreeNode<int>* root = takeInput();
    //printTree(root);
}