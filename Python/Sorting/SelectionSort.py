"""
Selection sort is better than bubble sort.
Here, we need to switch elements only once.
In bubble sort we switch in every iteration many times.
In selection sort, we are being efficient as we create a sub list which is sorted.
Hence, we do not need to iterate through the entire list.
Still, for selection sort, we have high complexity as we have 2 nested loops.
"""

def selection(l):
    if len(l) == 1:
        return l
    else:
        min = l[0]
        part = 0
        pos = 0
        while (part != len(l)-1):
            for i in range (part, len(l)):
                if min > l[i]:
                    min = l[i]
                    pos = i
            l[part], l[pos] = l[pos], l[part]
            part = part + 1
            min = l[part]
            print("Iteration",part,"list: ",l, "partition", l[part])

    return l




l = [-8, 8, 9, -7, 6, 0, 7, 3, -1, 5]
print(selection(l))