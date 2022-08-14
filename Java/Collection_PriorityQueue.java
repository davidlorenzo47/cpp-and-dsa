import java.util.*;

class MyCom implements Comparator<Integer>
{
    public int compare(Integer o1,Integer o2)
    {
        if(o1<o2)return 1;  //o2 needs to have higher priority, so return 1.
        if(o1>o2) return -1;
        return 0;   //if o1 and o2, both are equal, then return 0.
    }
}

public class Collection_PriorityQueue {
    public static void main(String[] args) {

        //the PriorityQueue by default uses MIN_Heap, so to use MAX_Heap we need to define out comparator.
        // PriorityQueue>Integer> pq = new PriorityQueue<>(new MyCom());

        PriorityQueue<Integer> pq = new PriorityQueue<>();

        pq.add(10); //adds the element.
        pq.add(20);
        pq.add(5);
        pq.add(30);
        pq.add(40);
        pq.add(50);
        pq.add(25);

        System.out.println(pq.peek());  //peek gives the head element.

        pq.forEach((x) -> System.out.println(x));

    }
}
