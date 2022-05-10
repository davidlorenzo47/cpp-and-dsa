class Outer
{
    static int x=10;
    Inner i=new Inner();
    
    class Inner
    {
        int y=20;
        public void innerDisplay()
        {
            System.out.println(x+" "+y);
        }
    }
    
    public void outerDisplay()
    {
        
        i.innerDisplay();
        System.out.println(i.y);
        
    }
}

public class NestedInnerClass {

    public static void main(String[] args) 
    {
        Outer.Inner oi=new Outer().new Inner();
        oi.innerDisplay();

        // Instead of creating object of inner class we can create object of outer class and call methods of inner class from a method which is in outer class.
        // Outer o = new Outer();
        // o.outerDisplay();
        
    }
    
}