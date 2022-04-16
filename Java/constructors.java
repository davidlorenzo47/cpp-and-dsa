// getters and setters

class Rectangle
{
    private double length;
    private double breadth;
    
    public Rectangle()
    {
        length = 1;
        breadth = 1;
    }
    public Rectangle(double l, double b)
    {
        length = l;
        breadth = b;
    }
    public Rectangle(double s)
    {
        length = breadth = s;
    }
    public double len()
    {
        return length;
    }
    public double bdh()
    {
        return breadth;
    }
}

public class constructors {
    public static void main(String[] args) {
        Rectangle r1 = new Rectangle();
        System.out.println("Length is: "+r1.len()+" Breadth is: "+r1.bdh()); 
        
        Rectangle r2 = new Rectangle(10, 5);
        System.out.println("Length is: "+r2.len()+" Breadth is: "+r2.bdh());
        
        Rectangle r3 = new Rectangle(100);
        System.out.println("Length is: "+r3.len()+" Breadth is: "+r3.bdh()); 

        
    }
}