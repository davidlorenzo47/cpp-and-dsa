
"""
complexity is log(n)

"""


def binary(l, num):
    begin_index = 0
    end_index = len(l)-1


    while begin_index <= end_index:
        midpoint = begin_index + (end_index - begin_index) // 2
        print("Midpoint is: ", l[midpoint], "Begin Index: ", begin_index, "End index: ", end_index )
        if l[midpoint] == num:
            return "Item found :)"
        elif num < l[midpoint]:
            end_index = midpoint - 1
        else:
            begin_index = midpoint + 1

    return "Item not found :("


l = [-8, -7, -1, 0, 3, 5, 6, 7, 8, 9]
num = 5
print(binary(l, num))