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
        curr_node = q.get()
        if curr_node is not None:
            print(curr_node.data,": ",end="")
        if curr_node.left is not None:
            q.put(curr_node.left)
            print(curr_node.left.data,end=",")
        if curr_node.right is not None:
            q.put(curr_node.right)
            print(curr_node.right.data,end="")
        print()


def pathToK(root,s):
    if root is None:
        return None
    
    if root.data == s:
        l = list()
        l.append(root.data)
        return l
    
    leftList = pathToK(root.left,s)
    if leftList is not None:
        leftList.append(root.data)
        return leftList
    rightList = pathToK(root.right,s)
    if rightList is not None:
        rightList.append(root.data)
        return rightList
    else:
        return None
    
    
root = takeInputLevelWise()
printLevelWise(root)
pathToK(root,13)