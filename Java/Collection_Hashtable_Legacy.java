import java.util.Enumeration;
import java.util.Hashtable;

public class Collection_Hashtable_Legacy {
    public static void main(String[] args) {

        Hashtable<Integer, String> ht = new Hashtable<>();

        ht.put(1, "V");
        ht.put(2, "G");
        ht.put(3, "S");
        ht.put(4, "B");
        ht.put(5, "R");
        ht.put(6, "P");

        // String s = (String)ht.get(3);
        // System.out.println(s);

        ht.compute(2, (k,v)->v+"Z"); //This changes value for the specified key.
        ht.compute(8, (k,v)->k+"N"); //To insert a new key, if key is not present.

        Enumeration e = ht.elements();

        while (e.hasMoreElements()) {
            System.out.println(e.nextElement());
        }
        
    }
}
