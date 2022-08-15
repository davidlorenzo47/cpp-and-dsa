import java.util.HashSet;

public class Collection_HashSet {
    public static void main(String[] args) {
        HashSet<Integer> hs = new HashSet<>(20, 0.75f); //first parameter is initial Capacity, second parameter is loading factor.

        hs.add(10);
        hs.add(100);
        hs.add(1000);
        hs.add(100);

        System.out.print(hs);
    }
}