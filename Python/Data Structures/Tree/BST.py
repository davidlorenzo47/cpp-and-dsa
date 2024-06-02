class BST:
    def __init__(self, data):
        self.parent = data
        self.left = None
        self.right = None

    def add_Node(self, data):
        if data == self.parent:
            return
        if data < self.parent:
            if self.left:
                self.left.add_Node(data)
            else: 
                self.left = BST(data)
        else:
            if self.right:
                self.right.add_Node(data)
            else: 
                self.right = BST(data) 
    
    def in_order(self):
        elements = []

        if self.left:
            elements += self.left.in_order()

        elements.append(self.parent)

        if self.right:
            elements += self.right.in_order()

        return elements
    
    def pre_order(self):
        elements = []

        elements.append(self.parent)

        if self.left:
            elements += self.left.in_order()

        if self.right:
            elements += self.right.in_order()        

        return elements


    def post_order(self):
        elements = []
        if self.left:
            elements += self.left.in_order()

        if self.right:
            elements += self.right.in_order()

        elements.append(self.parent)

        return elements
    
    def search(self, data):
        if self.parent == data:
            return True
        if data < self.parent:
            if self.left:
                return self.left.search(data)
            else:
                return False
        if data > self.parent: 
            if self.right:
                return self.right.search(data)
            else:
                return False
    
def build_tr(elements):
    root = BST(elements[0])

    for i in range(1, len(elements)):
        root.add_Node(elements[i])

    return root

nums = [45,7,4,3,2,4,5456,67,7,678,8,6,5,34,34,345,46]
nums_tr = build_tr(nums)
print("In Order: ", nums_tr.in_order())
print("Pre Order: ", nums_tr.pre_order())
print("Post Order: ", nums_tr.post_order())
print(nums_tr.search(5456))