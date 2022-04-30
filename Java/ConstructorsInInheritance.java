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
    public GrandChild(){
        System.out.println("GrandChild Constructor");
    }
}

public class ConstructorsInInheritance {
    public static void main(String[] args) {
        GrandChild c = new GrandChild();
        // here Parent class is executed first, then Child Class and then GrandChild class.
    }
}
