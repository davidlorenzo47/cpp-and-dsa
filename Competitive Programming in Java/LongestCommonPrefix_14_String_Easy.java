import java.util.Scanner;

public class LongestCommonPrefix_14_String_Easy {
    public String longestCommonPrefix(String[] strs) {
        
        if (strs.length == 0) return "";

        String s1 = strs[0];
        for (int i = 1; i < strs.length; i++) {
                


        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Scanner s1 = new Scanner(System.in);

        int n;

        System.out.print("Enter the size of the array: ");
        n = sc.nextInt();

        String[] astr = new String[n];

        for (int i = 0; i < n; i++) {       
            System.out.print("Enter the String: ");
            astr[i] = s1.nextLine();
        }

        for (int i = 0; i < n; i++) {
            System.out.println(astr[i]);
        }



    }
}
