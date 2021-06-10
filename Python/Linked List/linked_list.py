# class node:
#     def __init__(self,data):
#         self.data = data
#         self.next = None

# a = node(10)
# b = node(20)
# a.next = b
# print(a.data)
# print(b.data)
# print(a.next.data)

class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

def printLL(head):
    while head is not None:
        print(str(head.data) + "->",end="")
        head = head.next
    print("None")
    return

def takeInput():
    inputList = [int(ele) for ele in input().split()]
    head = None
    tail = None
    for currData in inputList:
        if currData == -1:
            break

        new_node = Node(currData)
        if head is None:
            head = new_node
            tail = new_node
        else:
            tail.next = new_node
            tail = new_node
    return head

head = takeInput()
printLL(head)