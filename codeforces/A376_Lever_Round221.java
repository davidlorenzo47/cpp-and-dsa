import java.util.Scanner;

public class A376_Lever_Round221 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s;
        s = sc.nextLine();
        sc.close();

        int part = s.indexOf("^"), left = 0, right = 0;

        for (int i = 0; i < s.length(); i++) {
            while (i <= part) {
                if (s.charAt(i) == '9') {
                    left += s.charAt(i);
                }
                i++;
            }
            if (s.charAt(i) == '1') {
                right += s.charAt(i);
            }
        }
        System.out.println("Left value is: "+left);
        System.out.println("Right value is: "+right);
    }
}
