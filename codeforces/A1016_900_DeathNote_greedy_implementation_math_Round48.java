import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

/**
 * A1016_900_DeathNote_greedy_implementation_math_Round48
 */
public class A1016_900_DeathNote_greedy_implementation_math_Round48 {

    public static void main(String[] args) throws Exception {

        // use buffer reader as scanner class is slow.
        // BufferedReader inp = new BufferedReader (new InputStreamReader(System.in));
        // int n= Integer.parseInt(inp.readLine()); // for taking a number as an input
        // int m= Integer.parseInt(inp.readLine()); // for taking a number as an input

        Scanner sc = new Scanner(System.in);

        // Time limit exceded for below commented code
        // int n,m;
        // // System.out.print("Enter value of n: ");
        // n = sc.nextInt();

        // // System.out.print("Enter value of m: ");
        // m = sc.nextInt();

        // int[] a = new int[n];

        // for (int i = 0; i < a.length; i++) {
        //     a[i] = sc.nextInt();
        // }

        // int remaining = m;
        // if (m == 1) {
        //     for (int i = 0; i < a.length; i++) {
        //         System.out.println(a[i]);
        //     }
        // }
        // else {
        // for (int i = 0; i < a.length; i++) {
        //     int page = 0;
        //     if (remaining - a[i] >= 0) {
        //         if (remaining - a[i] == 0) {
        //             System.out.print("1");
        //             remaining = m;
        //         }
        //         else {
        //         System.out.print("0"+" ");
        //         remaining -= a[i];
        //         }
        //     }
        //     else {
        //         a[i] -= remaining;
        //         while (a[i] >= 0) {
        //             a[i] -= m;
        //             page++;
        //         }
        //         System.out.print(page+" ");
        //         // remaining *= 0;
        //         remaining -= a[i]+remaining;
        //     }
        // } 
        // }

        int n=sc.nextInt();
        int m=sc.nextInt();
        
        int sum=0;
        for(int i=0;i<n;i++) {
            int a=sc.nextInt();
            sum+=a;
            System.out.print(sum/m+" ");
            sum=sum%m;
        }
        sc.close();
        
    }
}