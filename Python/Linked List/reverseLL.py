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

def insert(head,pos,data):
    i = 0
    curr = head
    while(i!=pos):
        head = curr
        curr = curr.next
        i += 1
    new_node = Node(data)
    new_node.next = curr
    head.next = new_node

def Reverse(head):
    Next = head
    Curr = None
    Prev = None
    while Next is not None:
        Prev = Curr
        Curr = Next
        Next = Next.next
        Curr.next = Prev
    head = Curr
    return head


def takeInput():
    # inputList = [int(ele) for ele in input().split()]
    inputList = [1,2,3,4,5]
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
insert(head,2,6)
printLL(head)
head = Reverse(head)
printLL(head)