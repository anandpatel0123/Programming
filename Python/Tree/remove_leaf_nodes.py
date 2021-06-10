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

def removeLeafNodes(root):
    if root is None:
        return None

    if root.left is None and root.right is None:
        return None
    root.left = removeLeafNodes(root.left)
    root.right = removeLeafNodes(root.right)
    return root

root = treeInput()
printTreePre(root)
print()
root = removeLeafNodes(root)
printTreePre(root)