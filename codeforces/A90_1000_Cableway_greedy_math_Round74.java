import java.util.Scanner;

public class A90_1000_Cableway_greedy_math_Round74 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int r, g, b, ans = 29;

        r = sc.nextInt();
        g = sc.nextInt();
        b = sc.nextInt();
        
        for (int i = 0; i < 300; i++) {
            if (r > 0 && (i%3 == 0)) {
                r--;
                r--;
                ans++;
                // System.out.print("Red: "+r+", ");
            }
            else if (g > 0 && ((i-1)%3 == 0)) {
                g--;
                g--;
                ans++;
                // System.out.print("Green: "+g+", ");
            }
            else if (b > 0 && ((i-2)%3 == 0)) {
                b--;
                b--;
                ans++;
                // System.out.print("Blue: "+b+", ");
            }
            else if(r>0 || b>0 || g>0){
                ans++;
            }
        }

        System.out.println(ans);
        sc.close();
    }
}
