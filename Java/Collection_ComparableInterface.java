import java.util.*;

class Point implements Comparable { //as we are using set, it is compulsory to implement Comparable interface.
    int x;
    int y;
    public Point(int x, int y) {
        this.x = x; //x of class Point is given value of x of constructor Point.
        this.y = y;
    }

    public String toString() {
        return "x="+x+" y="+y;
    }

    public int compareTo(Object o)
    {
        Point p=(Point)o;
        if(this.x<p.x)
            return -1;
        else if(this.x>p.x)
            return 1;
        else
        {
        if(this.y<p.y) 
            return -1;
        else if(this.y>p.y)
            return 1;
        else 
            return 0;
        }
    }
}

public class Collection_ComparableInterface {
    public static void main(String[] args) {
        TreeSet<Point> ts = new TreeSet<>();

        ts.add(new Point(1, 1));
        ts.add(new Point(2, 2));
        ts.add(new Point(3, 3));
        ts.add(new Point(4, 4));
        ts.add(new Point(5, 5));

        System.out.println(ts);
    }
}