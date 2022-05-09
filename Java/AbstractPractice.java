abstract class Shape{
    abstract public double perimeter();
    abstract public double area();
}

class Rectangle extends Shape{
    double length;
    double breadth;
    public double perimeter(){
        return 2*(length + breadth);
    }
    public double area(){
        return length*breadth;
    }
}

class Circle extends Shape{
    double radius;
    public double perimeter(){
        return 2*3.14*radius;
    }
    public double area(){
        return 3.14*radius*radius; 
    }
}

public class AbstractPractice {
    public static void main(String args[]){
        Rectangle r = new Rectangle();
        r.length = 20;
        r.breadth = 10;
        System.out.println("Perimeter of the Rectangle is: "+r.perimeter());
        System.out.println("Area of the Rectangle is: "+r.area());

        Circle c = new Circle();
        c.radius = 22;
        System.out.println("Perimeter of the Circle is: "+c.perimeter());
        System.out.println("Area of the Circle is: "+c.area());        
    }
}
