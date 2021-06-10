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

def treeInput():
    rootData = int(input())
    if rootData == -1:
        return None
    
    root = BinaryTreeNode(rootData)
    print(rootData,"-> Left : ",end="")
    leftTree = treeInput()
    print(rootData,"-> Right : ",end="")
    rightTree = treeInput()
    root.left = leftTree
    root.right = rightTree
    return root

def depthNode(root,k):
    if root == None:
        return
    
    if k == 0:
        print(root.data)
        return
    depthNode(root.left,k-1)
    depthNode(root.right,k-1)

def depthNode2(root,k,d=0):
    if root == None:
        return
    if k == d:
        print(root.data)
        return

    depthNode(root.left,k,d+1)
    depthNode(root.right,k,d+1)


root = treeInput()
printTreePre(root)