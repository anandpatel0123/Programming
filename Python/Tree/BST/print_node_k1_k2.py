#print all the nodes between k1 and k2
import queue
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

def printBetweenK1K2(root,k1,k2):
    if root is None:
        return
    if k1 < root.data:
        printBetweenK1K2(root.left,k1,k2)
    elif k1 > root.data:
        printBetweenK1K2(root.right,k1,k2)
    else:
        print(root.data)
        printBetweenK1K2(root.left,k1,k2)
        printBetweenK1K2(root.right,k1,k2)

root = takeInputLevelWise()
printTreePre(root)
printBetweenK1K2(root,5,10)

#        4
#       / \
#      2   10
#     / \  / \
#    1   3 7  12
#         / \ / \
#        5  6 10 18
