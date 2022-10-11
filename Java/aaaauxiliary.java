import java.util.Scanner;


public class aaaauxiliary {

    public static void main(String[] args) {

        int n = 2;
        int ans = 1;
        for (int i = 0; i <= 2*2*n; ++i)  // don't forget to count these *'s    
        {
            ans = ans * i * i * i;
            System.out.println(i);
        }
        System.out.println(ans);
    }
}