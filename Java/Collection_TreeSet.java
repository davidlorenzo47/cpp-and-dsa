import java.util.List;
import java.util.TreeSet;

public class Collection_TreeSet {
    public static void main(String[] args) {
        TreeSet<Integer> ts = new TreeSet<>(List.of(10, 20, 30, 40));

        ts.add(50);

        System.out.println(ts.ceiling(39)); // gives element near to input number, element will be greater than number.
        System.out.println(ts.floor(39)); // gives element near to input number, element will be smaller than number.

        System.out.println(ts);
    }
}
