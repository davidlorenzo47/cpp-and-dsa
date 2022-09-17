import java.lang.reflect.Array;
import java.util.Arrays;

/**
 * TwoSum_1_Array_HashTable_Easy
 */

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int i = 0, j = 0;
        int[] ans = new int[2];
        while (i < nums.length) {
            j = i;
            while (j < nums.length) {
                if (j != i) {
                    if (nums[i] + nums[j] == target) {
                        ans[0] = i;
                        ans[1] = j;
                        break;
                    }
                }
                j++;
            }
            i++;
        }
        return ans;
        
        /*
        Approach 2: Two-pass Hash Table
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], i);
        }
        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];
            if (map.containsKey(complement) && map.get(complement) != i) {
                return new int[] { i, map.get(complement) };
            }
        }
        // In case there is no solution, we'll just return null
        return null;
        */
        
        /*
        Approach 3: One-pass Hash Table
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];
            if (map.containsKey(complement)) {
                return new int[] { map.get(complement), i };
            }
            map.put(nums[i], i);
        }
        // In case there is no solution, we'll just return null
        return null;
        */
    }
}

public class TwoSum_1_Array_HashTable_Easy {
    public static void main(String[] args) {
        Solution soln = new Solution();
        int[] nums = new int[]{2, 7, 11, 15};
        int[] ans = new int[2];
        ans = soln.twoSum(nums, 9);
        System.out.println("Answer is: "+ans[0]+" "+ans[1]);
    }
}