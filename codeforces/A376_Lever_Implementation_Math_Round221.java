import java.util.Scanner;

public class A376_Lever_Implementation_Math_Round221 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s;
        s = sc.nextLine();
        sc.close();

        int part = s.indexOf("^");
        long left = 0;
        long right = 0;

        for (int i = 0; i < part; i++) {
            if (s.charAt(i) <= '9' && s.charAt(i) >= '1') {
                left += (part-i)*(s.charAt(i)-'0');
            }
        }
        for (int j = part+1; j < s.length(); j++) {
            if (s.charAt(j) <= '9' && s.charAt(j) >= '1') {
                right += (j-part)*(s.charAt(j)-'0');
            }
        }
        // System.out.println("Left is: "+left);
        // System.out.println("Right is: "+right);
        if (left == right) {
            System.out.println("balance");
        }
        else if (left < right) {
            System.out.println("right");
        }
        else if (right < left) {
            System.out.println("left");
        }
    }
}
