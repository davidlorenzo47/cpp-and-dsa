"""
Breadth First Search:
Depth First Search:
In order:   Left, Root, Right   //getting elements in sortd order
Pre order:  Root, Left, Right   //
Post order: Left, Right, Root
"""

class Node:
    def __init__(self, data):
        self.data = data
        self.children = []
        self.parent = None

    def add_child(self, child):
        child.parent = self
        self.children.append(child)
    
    def get_level(self):
        level = 0
        p = self.parent
        while p:
            level += 1
            p = p.parent
        return level
    
    def print_t(self):
        spaces = " "*self.get_level()*2
        prefix = spaces + "|__" if self.parent else ""
        print(prefix + self.data)
        if len(self.children):
            for child in self.children:
                child.print_t()


def build_tree():
    root = Node("USA")

    ca = Node("CA")
    # ca.add_child(Node("SF"))
    ca.add_child(Node("LA"))

    ba = Node("Bay Area")
    ba.add_child(Node("Santa Clara"))
    ba.add_child(Node("San Jose"))
    ba.add_child(Node("East Bay"))

    ny = Node("NY")
    ny.add_child(Node("NYC"))

    nj = Node("NJ")
    nj.add_child(Node("ED"))

    root.add_child(ca)
    root.add_child(ny)
    root.add_child(nj)
    ca.add_child(ba)


    return root


rt = build_tree()
rt.print_t()