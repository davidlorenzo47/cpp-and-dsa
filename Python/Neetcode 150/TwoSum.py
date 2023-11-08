from collections import defaultdict

def TwoSum(nums, target):
    my_dict = {}
    for i in range (len(nums)):
        if target-nums[i] in my_dict:
            return [my_dict[target-nums[i]], i]
        else:
            my_dict[nums[i]] = i

nums = [2,7,11,15]
target = 9
print(TwoSum(nums, target))