def longestConsecutive(nums):
    nums.sort()
    print(nums)
    element = nums[0]
    ans = 1
    temp = 1 
    for i in range (len(nums)):
        if nums[i] == element + 1:
            temp += 1
            element = nums[i]
        else: 
            element = nums[i]
            temp = 1
        print("temp:",temp)
        ans = max(ans, temp)
    return ans


nums = [0,3,7,2,5,8,4,6,0,1]
num2 = [1,2,0,1]
print(longestConsecutive(nums))
print(longestConsecutive(num2))