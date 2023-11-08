def containsDuplicate(nums):
    my_set = set()
    for num in nums:
        if num in my_set:
            return True
        my_set.add(num)
    return False



nums = [1,2,3,1]
print(containsDuplicate(nums))