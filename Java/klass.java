class Circle
{
    public double radius;

    public double Area()
    {
        return Math.PI*radius*radius;
    }
    public double perimeter()
    {
        return 2*Math.PI*radius;
    }
    public double circumference()
    {
        return perimeter();
    }
}

public class klass {
    public static void main(String[] args) {
        Circle c = new Circle();

        c.radius = 10;

        System.out.println("Area is: "+c.Area());
        System.out.println("Perimeter is: "+c.perimeter());
        System.out.println("Circumference is: "+c.circumference());
    }
}