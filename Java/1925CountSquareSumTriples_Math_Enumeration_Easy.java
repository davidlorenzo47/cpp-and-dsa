import java.util.Scanner;

class Solution {
    public int countTriples(int n) {
        int a, b, ans = 0;

        for (int i = 1; i <= n; i++) {
            a = i;
            for (int j = 1; j < n ; j++) {
                if (j!=i) {
                    b = j;
                    double f = Math.sqrt(Math.pow(a, 2) + Math.pow(b, 2));
                    System.out.println("Value of i:"+i+"Value of j: "+b);
                    if (f - (int)f == 0 && f<=n) {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
}

public class aaaauxiliary {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        int a;
        
        System.out.print("Enter the value of a: ");
        a = sc.nextInt();
        Solution soln = new Solution();
               
        sc.close();

        System.out.print("Answer is: "+soln.countTriples(a));
    }
}