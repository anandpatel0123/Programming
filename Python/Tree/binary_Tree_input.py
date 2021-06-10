
# Pre-Order 
# Root->Left->Right
# Post-Order 
# Left->Right->Root
# In-Order
# Left->Root->Right
# Level-Order
# Level-Wise

class BinaryTreeNode:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

def printTreePre(root):
    if root is None:
        return
    print(root.data,end=':')
    if root.left is not None:
        print("L ->",root.left.data, end=',')
    if root.right is not None:
        print("R ->",root.right.data, end='')
    print()
    printTreePre(root.left)
    printTreePre(root.right)

def printTreePost(root):
    if root is None:
        return
    if root.left is not None:
        print("L ->",root.left.data, end=',')
    if root.right is not None:
        print("R ->",root.right.data, end='')
    print(root.data,end=':')
    print()
    printTreePost(root.left)
    printTreePost(root.right)

def right(root):
    if root is None:
        return
    print(root.data,end=' ')
    right(root.right)

def printTreeIn(root):
    if root is None:
        return
    printTreeIn(root.left)
    print(root.data,end=', ')



def treeInput():
    rootData = int(input())
    if rootData == -1:
        return None
    
    root = BinaryTreeNode(rootData)
    leftTree = treeInput()
    rightTree = treeInput()
    root.left = leftTree
    root.right = rightTree
    return root

def numNodes(root):
    if root is None:
        return 0
    leftCount = numNodes(root.left)
    rightCount = numNodes(root.right)
    return 1 + leftCount + rightCount


root = BinaryTreeNode(1)
root.left = BinaryTreeNode(2)
root.right = BinaryTreeNode(3)
root.left.right = BinaryTreeNode(4)
root.left.right.right = BinaryTreeNode(5)
root.left.right.right.right = BinaryTreeNode(6)
printTreeIn(root)
right(root.right)