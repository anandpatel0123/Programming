class BinaryTreeNode:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

def printTree(root):
    if root is None:
        return
    print(root.data)
    printTree(root.left)
    printTree(root.right)


def printTreeDetailed(root):
    if root is None:
        return
    print(root.data,end=':')
    if root.left is not None:
        print("L ->",root.left.data, end=',')
    if root.right is not None:
        print("R ->",root.right.data, end='')
    print()
    printTreeDetailed(root.left)
    printTreeDetailed(root.right)


btn1 = BinaryTreeNode(1)
btn2 = BinaryTreeNode(4)
btn3 = BinaryTreeNode(5)
btn4 = BinaryTreeNode(6)
btn5 = BinaryTreeNode(7)

btn1.left = btn2
btn1.right = btn3
btn2.left = btn4
btn2.right = btn5

printTreeDetailed(btn1)
