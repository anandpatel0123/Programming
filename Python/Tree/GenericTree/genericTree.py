import queue
class TreeNode:
    def __init__(self,data):
        self.data = data
        self.children = list()

def printTree(root):
    #Not a base Case
    if root is None:
        return
    print(root.data)
    for child in root.children:
        printTree(child)

def printTreeDetailed(root):
    if root is None:
        return
    print(root.data,":",end="")
    for child in root.children:
        print(child.data,end=",")
    print()
    for child in root.children:
        printTreeDetailed(child)

def takeInput():
    print("Enter Root Data :",end="")
    rootData = int(input())
    if rootData == -1:
        return None
    root = TreeNode(rootData)
    q = queue.Queue()
    q.put(root)
    while(not(q.empty())):
        currNode = q.get()
        flag = True
        while(flag):
            print("Enter ",currNode.data,"Child :",end="")
            childData = int(input())
            if childData != -1:
                childNode = TreeNode(childData)
                currNode.children.append(childNode)
                q.put(childNode)
            else:
                flag = False
    return root
        
def numNodes(root):
    if root is None:
        return
    count = 1
    for child in root.children:
        count += numNodes(child)
    return count

def height(root):
    count = 0
    for child in root.children:
        max = height(child)
        if max > count:
            count = max
    return count+1

root = takeInput()
printTreeDetailed(root)
print("Num Nodes --> ",numNodes(root))
print("Height Of Tree --> ",height(root))
