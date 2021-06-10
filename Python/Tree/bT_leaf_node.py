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

def leafNodes(root):
    if root is None:
        return 0
    if root.right is None and root.left is None:
        return 1
    leafLeft = leafNodes(root.left)
    leafRight = leafNodes(root.right)
    return leafRight + leafLeft

root = treeInput()
printTreePre(root)
print(leafNodes(root))