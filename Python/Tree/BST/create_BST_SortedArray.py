import queue
class BinaryTreeNode:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None


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


def createBSTSortedList(lst):
    if len(lst) == 0:
        return None
    mid = int(len(lst)/2)
    root = BinaryTreeNode(lst[mid])
    root.left = createBSTSortedList(lst[:mid])
    root.right = createBSTSortedList(lst[mid+1:])
    return root

lst = [1,2,3,4,5,6,7]
root = createBSTSortedList(lst)
printLevelWise(root)


