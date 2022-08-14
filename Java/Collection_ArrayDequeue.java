import java.util.*;

public class Collection_ArrayDequeue {
    public static void main(String[] args) {
        
        //ArrayDeque can perform as a stack or a Queue as well. It depeneds on us how we want to implement it.
        ArrayDeque<Integer> ad = new ArrayDeque<>();

        ad.offerLast(10);
        ad.offerLast(20);
        ad.offerLast(30);
        ad.offerLast(40);   //offerLast puts element at the end.

        ad.pollLast();  //deletes last element.
        ad.pollFirst(); //deletes first element.
        ad.poll();  //deletes first element.

        ad.forEach((x) -> System.out.println(x));   //this is a Lambda Expression.

        // ad.offerFirst(0);
        // ad.offerFirst(-10);
        // ad.offerFirst(-20);     //offerFirst puts the element at first.

        // ad.forEach((x) -> System.out.println(x));

    }
}