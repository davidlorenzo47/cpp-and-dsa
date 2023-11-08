def maxSubArray(nums):
        ans = -2**31
        temp = 0
        for i in range (len(nums)):
            temp += nums[i]
            ans = max(ans, temp)
            if temp < 0:   
                temp = 0
        return ans

nums = [-2,-1,-3,-4,-1,-2,-1,-5,-4]
print(maxSubArray(nums))

