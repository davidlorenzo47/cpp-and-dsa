import java.util.Scanner;

public class A1279_900_NewYearGarland_Math_Round79 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int rows;
        rows =  sc.nextInt();
        int[][] a = new int[rows][3];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < 3; j++) {
                a[i][j] = sc.nextInt();
            }
        }
        sc.close();

        for (int i = 0; i < rows; i++) {
            if ((a[i][0] + a[i][1] < a[i][2]-1) || (a[i][0] + a[i][2] < a[i][1]-1) || (a[i][1] + a[i][2] < a[i][0]-1)) {
                System.out.println("No");
            }
            else {
                System.out.println("Yes");
            }
        }
    }
}