import java.util.HashMap;

public class Collection_HashMap {
    public static void main(String[] args) {
        HashMap<String, Integer> myhm = new HashMap<>();

        myhm.put("abc", 1);
        myhm.put("def", 2);
        myhm.put("ghi", 6);
        myhm.put("jkl", 3);
        myhm.put("mno", 4);

        System.out.println(myhm); //to print whole HashMap

        System.out.println(myhm.get("jkl")); //to get key of the specified value

        myhm.putIfAbsent("ghi", 7); //does not put the value with the key as value ghi is already present.

        myhm.remove("mno")

        System.out.println(myhm);
    }
}
