// This method is demonstarated for Abstract class, for interface also it works the same way.

abstract class My {
    abstract public void show();
}

class Outer {
    public void display() {
        My m = new My(){
            public void show() {
                System.out.println("Hello");
            }
        };
        //new My(){public void show(){System.out.println("Hello");}}.show(); //this is another way to make object.
        m.show();
    }
}

public class AnonymousClass {
    public static void main(String[] args){
        Outer o = new Outer();
        o.display();
    }
}