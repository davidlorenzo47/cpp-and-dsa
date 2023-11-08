def maxArea(height):
    start_idx = 0
    end_idx = len(height)
    end_idx -= 1
    ans = 0
    length = 0
    br = 0
    while(start_idx<end_idx):
        length = min(height[start_idx], height[end_idx])
        br = end_idx-start_idx
        area = length*br
        ans = max(ans, area)
        print("Start",start_idx," End:",end_idx," Area:",br,"*",length,"=",area)
        if height[start_idx] > height[end_idx]:
            end_idx -= 1
        elif height[start_idx] < height[end_idx]:
            start_idx += 1
        else:
            start_idx += 1
            end_idx -= 1
            
        
    return ans



h = [0,1,0,1,0]
print(maxArea(h))