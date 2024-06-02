def findClosestNumber(nums):
    n = sorted(nums)
    min = n[1]
    for i in range (1, len(n)):
        if (abs(n[i]) < abs(min)):
            min = n[i]
    return min

l = [2,-1,1]
print(findClosestNumber(l))