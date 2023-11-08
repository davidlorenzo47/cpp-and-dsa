#Class to represent one Node.
#It will have Value of a node and pointer to next node.
class Node:
    def __init__(self, data = None, next = None):
        self.data = data
        self.next = next


#Class to manipulate the LinkedList
class LinkedList:
    def __init__(self):
        self.head = None

    def print(self):
        if self.head is None:
            print("LinkedList is empty!!")
            return
        
        itr = self.head
        llstr = ''
        while itr:
            llstr += str(itr.data) + '-->'
            itr = itr.next
        print(llstr)

    def length(self):
        count = 0
        itr = self.head
        while itr:
            count += 1
            itr = itr.next
        return count

    def insertAtBegining(self, data):
        node = Node(data, self.head)
        self.head = node

    def insertAtEnd(self, data):
        if self.head is None:
            self.head = Node(data, None)
            return
        itr = self.head
        while itr.next:
            itr = itr.next

        itr.next = Node(data, None)

    def insertAt(self, pos, data):
        if pos == 0:
            self.insertAtBegining(data)
            return
        count = 0
        itr = self.head
        while itr:
            if count == pos - 1:
                node = Node(data, itr.next)
                itr.next = node
                break
            itr = itr.next
            count += 1

    def remove(self, pos):
        if pos == 0:
            self.head = self.head.next
            return
        count = 0
        itr = self.head
        while itr:
            if pos-1 == count:
                itr.next = itr.next.next
                break
            itr = itr.next
            count += 1

    def insertValues(self, newDataList):
        self.head = None
        for data in newDataList:
            self.insertAtEnd(data)


ll = LinkedList()
ll = LinkedList()
ll.insertValues(["banana","mango","grapes","orange"])
ll.insertAt(1,"blueberry")
ll.remove(2)
ll.print()

ll.insertValues([45,7,12,567,99])
ll.insertAtEnd(67)
ll.print()