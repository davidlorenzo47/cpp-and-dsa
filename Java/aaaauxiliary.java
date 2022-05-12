import java.util.Scanner;

class Solution{
    public int triangularSum(int[] nums) {
        int temp = nums.length;
        while (temp > 1) {
            for (int i = 0; i < temp-1; i++) {
                nums[i] = (nums[i] + nums[i+1])%10;
            }
            temp--;
        }
        return nums[0];
    }
}

public class aaaauxiliary {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int size;
        System.out.print("Enter the size of the array: ");
        size = sc.nextInt();

        int[] arr = new int[size];
        int element;
        for (int i = 0; i < size; i++) {
            System.out.print("Enter the element: ");
            element = sc.nextInt();
            arr[i] = element;
        }
        
        sc.close();

        Solution soln = new Solution();
        System.out.print("Answer is: "+ soln.triangularSum(arr));
    }
}