import queue
class BinaryTreeNode:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

def takeInputLevelWise():
    q = queue.Queue()
    print("Enter root")
    rootData = int(input())
    if rootData == -1:
        return None
    root = BinaryTreeNode(rootData)
    q.put(root)
    while(not(q.empty())):
        current_node = q.get()
        print("Enter Left child of ", current_node.data)
        leftChildData = int(input())
        if leftChildData != -1:
            leftChild = BinaryTreeNode(leftChildData)
            current_node.left = leftChild
            q.put(leftChild)
        print("Enter Right child of ", current_node.data)
        rightChildData = int(input())
        if rightChildData != -1:
            rightChild = BinaryTreeNode(rightChildData)
            current_node.right = rightChild
            q.put(rightChild)

    return root

def printLevelWise(root):
    if root is None:
        return None
    q = queue.Queue()
    q.put(root)
    while(not(q.empty())):
        current_node = q.get()
        if current_node is not None:
            print(current_node.data,": ",end="")
        if current_node.left is not None:
            q.put(current_node.left)
            print(current_node.left.data,end=",")
        if current_node.right is not None:
            q.put(current_node.right)
            print(current_node.right.data,end="")
        print()

def minTree(root):
    if root is None:
        return 10000
    leftMin = minTree(root.left)
    rightMin = minTree(root.right)
    return min(leftMin,rightMin,root.data)

def maxTree(root):
    if root is None:
        return -10000
    leftMax = maxTree(root.left)
    rightMAx = maxTree(root.right)
    return max(leftMax,rightMAx,root.data)

def isBST(root):
    if root is None:
        return True
    
    leftMax = maxTree(root.left)
    rightMin = minTree(root.right)

    if root.data >= rightMin or root.data <= leftMax:
        return False

    isLeftBST = isBST(root.left)
    isRightBST = isBST(root.right)
    return isLeftBST and isRightBST

def OisBST(root):
    if root is None:
        return 10000, -10000, True
    
    leftMin, leftMax, isLeftBST = OisBST(root.left)
    rightMin, rightMax, isRightBST = OisBST(root.right)

    minimum = min(leftMin,rightMin,root.data)
    maximum = max(leftMax,rightMax,root.data)

    isTreeBST = True
    if root.data <= leftMax or root.data > rightMin:
        isTreeBST = False
    if not(isLeftBST) or not(isRightBST):
        isTreeBST = False
    
    return minimum, maximum, isTreeBST

def isBST2(root,min_range=-10000,max_range=10000):
    if root is None:
        return True
    
    if root.data <= min_range or root.data > max_range:
        return False
    
    isLeftWithInConstraints = isBST2(root.left,min_range,root.data-1)
    isRightWithInConstraints = isBST2(root.right,root.data,max_range)

    return isLeftWithInConstraints and isRightWithInConstraints

root = takeInputLevelWise()
printLevelWise(root)
print(OisBST(root))
