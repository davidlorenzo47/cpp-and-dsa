import java.util.Scanner;

public class A916_900_JamieandAlarmSnooze_bruteforce_implementation_math_Round221 {

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
            } else if (mm-gap >= 0){
                mm -= gap;
                ans++;
                // System.out.println("Minute is: "+mm);
            }
            else {
                mm -= gap;
                mm += 60;
                hh--;
                if (hh == -1) {
                    hh = 23;
                }
                ans++;
                // System.out.println("Minute is: "+mm+"Second Loop");
            }
        } 
    }
}