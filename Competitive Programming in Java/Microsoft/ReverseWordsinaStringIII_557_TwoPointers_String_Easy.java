import java.util.*;

import javax.print.DocFlavor.INPUT_STREAM;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.Reader;
import java.lang.*;

public class aaaauxiliary {

    public static String reverseWords(String s) {
        String ans = "";

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ' ') {
                ans += ' ';
            }
            else ans = s.charAt(i) + ans;
        }
        return ans;
    }

    public static void main(String[] args) throws Exception {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.print("Enter the string: ");
        // int size = Integer.parseInt(br.readLine());
        String s = br.readLine();
        
        System.out.println(reverseWords(s));
        
    }
}