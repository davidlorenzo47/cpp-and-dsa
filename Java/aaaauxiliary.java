import java.util.Scanner;


public class aaaauxiliary {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        int gap, hh, mm, ans = 0;
        boolean flag = false;
        gap = sc.nextInt();
        hh = sc.nextInt();
        mm = sc.nextInt();
        sc.close();

        while (!flag) {
            if (hh % 10 == 7 || hh / 10 == 7 || mm % 10 == 7 || mm / 10 == 7) {
                System.out.println(ans);
                flag = true;
            } else if (mm-gap > 0){
                mm -= gap;
                ans++;
                System.out.println("Minute is: "+mm);
            }
            else {

                mm -= gap+60;
                hh--;
                mm *= -1;
                ans++;
                System.out.println("Minute is: "+mm+"Second Loop");
            }
        } 
    }
}