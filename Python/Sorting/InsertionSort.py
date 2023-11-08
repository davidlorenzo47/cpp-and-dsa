"""
Complexity of this algorithm is almost same as Bubble Sort and Selection Sort,
However this algorithm will be a little bit faster sometime.
"""

def insertion(l):
    
    for i in range (1, len(l)):
        value = l[i]
        while (l[i-1]>l[i] and i>0):
            l[i-1], l[i] = l[i], l[i-1]
            i = i-1
        print(l)
    return l

l = [-8, 8, 9, -7, 6, 0, 7, 3, -1, 5]
print(insertion(l))