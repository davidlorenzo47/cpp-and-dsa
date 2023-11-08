def canJump(nums):
    # jump_pos = 0
    # for i,n in enumerate(nums):
    #     jump_pos = max(jump_pos, i+n)
    # return True if jump_pos > len(nums) else False
        goal = len(nums) - 1
        for i in range(len(nums) -1 ,-1,-1):
            if i + nums[i] >= goal:
                goal = i
            print(i, nums[i], goal)
        return goal == 0





nums = [2,5,10,0,100,0,0,0,0,0,0,0,0,0,0,0,0]
print(canJump(nums))