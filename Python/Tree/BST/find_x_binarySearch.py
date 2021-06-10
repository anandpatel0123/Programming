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

def search(root,x):
    if root is None:
        return False
    if root.data == x:
        return True
    elif x < root.data:
        return search(root.left,x)
    elif x > root.data:
        return search(root.right,x)

root = takeInputLevelWise()
printTreePre(root)
print(search(root,3))

#        4
#       / \
#      2   6
#     / \
#    1   3