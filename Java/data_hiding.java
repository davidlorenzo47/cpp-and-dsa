// getters and setters

class Rectangle
{
    private double length;
    private double breadth;

    //for reading the property call get method
    public double getLength()
    {
        return length;
    }
    public double getBreadth()
    {
        return breadth;
    }

    //for writing call set Method
    public void setLength(double l)
    {
        if (l > 0) {
            length = l;
        }
        else
        {
            length = 0;
        }
    }
    public void setBreadth(double b)
    {
        if (b > 0) {
            breadth = b;
        }
        else
        {
            breadth = 0;
        }
    }

    public double area()
    {
        return length*breadth;
    }
    public double perimeter()
    {
        return 2*(length + breadth);
    }
    public boolean isSquare()
    {
        if (length ==  breadth) {
            return true;
        }
        else
        {
            return false;
        }
    }
}

public class data_hiding {
    public static void main(String[] args) {
        Rectangle r = new Rectangle();

        r.setBreadth(5);
        r.setLength(5);

        System.out.println("Length is: "+r.getLength()+" Breadth is: "+r.getBreadth());
        System.out.println("Area is: "+r.area());
        System.out.println("Perimeter is: "+r.perimeter());
        System.out.println("Is rectangle square? "+r.isSquare());
    }
}