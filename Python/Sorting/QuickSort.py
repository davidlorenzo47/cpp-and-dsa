"""
In most cases time complexity of QuickSort is nlog(n).

"""

def qs(l):
    if len(l) <= 1:
        return l
    else:
        pivot = l.pop()

    items_greater = []
    items_lower = []

    for i in range (len(l)):
        if (l[i] > pivot):
            items_greater.append(l[i])
        else:
            items_lower.append(l[i])

    return qs(items_lower) + [pivot] + qs(items_greater)


l = [-8, 8, 9, -7, 6, 0, 7, 3, -1, 5]
print(qs(l))