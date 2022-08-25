import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;

public class Collection_LinkedHashSet {
    public static void main(String[] args) {

        //In Linked HashSet elements appear in the order in which they are inserted.
        //In HashSet, elements appear in the sorted order.
        HashSet<String> lhs = new HashSet<>(20);

        lhs.add("S");
        lhs.add("F");
        lhs.add("A");
        lhs.add("H");
        lhs.add("L");
        lhs.add("C");
        lhs.add("W");
        lhs.add("X");
        lhs.add("N");
        lhs.add("O");

        System.out.println(lhs);
        lhs.forEach(System.out::println);
        Iterator<String> itr = lhs.iterator();
        while (itr.hasNext()) {
            System.out.println(itr.next());
        }
        
    }
}
