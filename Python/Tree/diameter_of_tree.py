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

def height(root):
    if root is None:
        return 0
    return 1 + max(height(root.left),height(root.right))

def diameter(root):
    if root is None:
        return None
    lh = height(root.left)
    rh = height(root.right)
    
    ld = diameter(root.left)
    rd = diameter(root.right)
    
    return max(lh+rh+1,max(ld,rd))

root = treeInput()
printTreePre(root)
diameter(root)