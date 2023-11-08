def productExceptSelf(nums):
    ans = [1]*len(nums)
    l = len(nums)
    pre = 1
    post = 1
    for i in range (l):
        ans[i] *= pre
        pre *= nums[i] 

        ans[l-1-i] *= post
        post *= nums[l-1-i]

    return ans

num1 = [1,2,3,4]
num2 = [-1,1,0,-3,3]

print(productExceptSelf(num1))
print(productExceptSelf(num2))