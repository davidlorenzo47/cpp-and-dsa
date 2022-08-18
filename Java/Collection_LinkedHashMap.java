import java.text.StringCharacterIterator;
import java.util.LinkedHashMap;
import java.util.Map;

public class Collection_LinkedHashMap {
    public static void main(String[] args) {
        LinkedHashMap<Integer, String> lhm = new LinkedHashMap<>(5, 0.75f, true) {
            protected boolean removeEldestEntry(Map.Entry e) {  //here method must be protected
                return size()>5;    //no more than 5 elements will be present in the LinkedHashMap, whenever we call put or insert method, this method will be called and it will delete eldest entry.
            }
        };
        //here first initial capacity is mentioned, then loading factor, then accessOrder.
        //if accessOrder is true then the order in which the keys are accessed is mentioned.

        //here order of the keys in which they were inserted is maintained.
        lhm.put(1, "A");
        lhm.put(2, "B");
        lhm.put(3, "C");
        lhm.put(4, "D");
        lhm.put(5, "E");
        lhm.put(6, "F");
        lhm.put(9, "Z");
        lhm.put(8, "Y");

        String s;
        s = lhm.get(1);
        s = lhm.get(3);
        s = lhm.get(3);
        s = lhm.get(1);
        s = lhm.get(5);

        System.out.println(lhm);    //to print the LHM.
        lhm.forEach((k,v) -> System.out.println(k+" "+v));  //to print the LHM.
    }
}
