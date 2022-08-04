import java.util.Scanner;

public class A320_MagicNumbers_bruteforce_greedy_Round189 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a;
        boolean flag = true;
        a = sc.nextInt();
        while (a != 0 && flag == true) {
            if (a%1000 == 144) {
                a /= 1000;
            }
            else if (a%100 == 14) {
                a /= 100;
            }
            else if (a%10 == 1) {
                a /= 10;
            }
            else {
                flag = false;
            }
        }
        if (a == 0) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        sc.close();
    }
}
