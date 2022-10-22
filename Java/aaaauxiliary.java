import java.util.*;

import javax.print.DocFlavor.INPUT_STREAM;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.Reader;
import java.lang.*;

public class aaaauxiliary {

    public static int titleToNumber(String columnTitle) {

        int ans = 0, temp = 0, size = columnTitle.length();
        for (int i = 0; i < size; i++) {
            temp = (columnTitle.charAt(i) - 64) + (size-i-1)*26;
            System.out.print(temp+" ");
            ans += temp;
        }
        return ans;
    }

    public static void main(String[] args) throws Exception {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.print("Enter the string: ");
        // int size = Integer.parseInt(br.readLine());
        String s = br.readLine();
        
        System.out.println(titleToNumber(s));
        
    }
}