def bubble(l):
    if len(l) == 1:
        return l
    else:
        change = 1
        while (change != 0):
            change = 0
            for i in range (len(l)-1):
                if (l[i] > l[i+1]):
                    change = 1
                    l[i], l[i+1] = l[i+1], l[i]
    return l




l = [-8, 8, 9, -7, 6, 0, 7, 3, -1, 5]
print(bubble(l))