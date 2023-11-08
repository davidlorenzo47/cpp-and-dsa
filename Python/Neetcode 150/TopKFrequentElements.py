def TopEle(nums, k):
    my_dict = {}
    for i in range (len(nums)):
        if nums[i] in my_dict:
            my_dict[nums[i]] += 1
        else:
            my_dict[nums[i]] = 1
    my_dict = dict(sorted(my_dict.items(),key=lambda x:x[1], reverse=True))
    return list(my_dict)[:k]


nums = [1,1,1,1,2,2,3,3,3,3,3,3,3,3,3]
k = 2
print(TopEle(nums, k))