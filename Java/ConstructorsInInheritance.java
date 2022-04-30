// package constructorsininheritance;

class Parent
{
    public Parent(){
        System.out.println("Parent Constructor");
    }
}

class Child extends Parent {
    public Child(){
        System.out.println("Child Constructor");
    }
}

class GrandChild extends Child {
    private double breadth;
    public double getBreadth()
    {
        return breadth;
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
    public GrandChild(){
        System.out.println("GrandChild Constructor");
    }
}

public class ConstructorsInInheritance {
    public static void main(String[] args) {
        GrandChild c = new GrandChild();
        c.setBreadth(5);
        System.out.println(c.getBreadth());
        // here Parent class is executed first, then Child Class and then GrandChild class.
    }
}
