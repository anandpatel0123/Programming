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
    return 1 + max(height(root.left), height(root.right))

def isBalanced(root):
    if root is None:
        return True
    
    lh = height(root.left)
    rh = height(root.right)
    if lh-rh > 1 or rh-lh > 1:
        return False

    isLeftBalanced = isBalanced(root.left)
    isRightBalanced = isBalanced(root.right)

    if isLeftBalanced and isRightBalanced:
        return True
    else:
        return False


def oIsBalanced(root):
    if root is None:
        return 0,True
    lh, isLeftBalanced = oIsBalanced(root.left)
    rh, isRightBalanced = oIsBalanced(root.right)

    h = 1+ max(lh,rh)
    if lh-rh > 1 or rh-lh > 1:
        return h,False

    if isLeftBalanced and isRightBalanced:
        return h, True
    else:
        return h,False


root = treeInput()
printTreePre(root)
print()