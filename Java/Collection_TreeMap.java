import java.util.Scanner;
import java.util.TreeMap;

public class Collection_TreeMap {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        TreeMap<Integer, String> tm = new TreeMap<>(); //HashMap is almost similar to TreeMap.

        for (int i = 0; i < 10; i++) {
            String Value;
            System.out.print("Enter the Value: ");
            Value = sc.nextLine();
            tm.put(i, Value);
        }
        sc.close();

        System.out.println(tm);
    }
}
