import java.util.Scanner;

public class aaauxiliary {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int a = 1;
        sc.close();

        boolean flag = false;

        while (!flag) {
            for (int i = 0; i <= 10; i++) {
                System.out.println(a);
                a++;
                if (i == 10) {
                    flag = true;
                }
            }
        }

        
    }
}
