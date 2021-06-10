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
    leftTree = treeInput()
    rightTree = treeInput()
    root.left = leftTree
    root.right = rightTree
    return root

def largestNumTree(root):
    if root is None:
        return -1
    leftLargest = largestNumTree(root.left)
    rightLargest = largestNumTree(root.right)
    largest = max(leftLargest,rightLargest,root.data)
    return largest

root = treeInput()
printTreePre(root)
print(largestNumTree(root))