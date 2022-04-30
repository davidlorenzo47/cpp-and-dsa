// getters and setters

class Rectangle
{
    private double length;
    private double breadth;
    
    public Rectangle() //this is a non parameterized constructor
    {
        length = 1;
        breadth = 1;
    }
    public Rectangle(double l, double b) //this is a parameterized constructor
    {
        length = l;
        breadth = b;
    }
    public Rectangle(double s) //this is a parameterized constructor
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