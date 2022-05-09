abstract class Super{
    public Super(){
        System.out.println("Super Constructor");    //When we create an object of sub class constructor of super class is called first. Hence "Super Constructor" is called first.
    }
    public void meth1(){
        System.out.println("Meth1 of Super"); //this will be called second.
    }

    abstract public void meth2();
}

class Sub extends Super{
    @Override
    public void meth2(){
        System.out.println("Sub Meth2"); //this will be called third.
    }
}

public class AbstractExample{
    public static void main(String args[]){
        Super s = new Sub();
        s.meth1();
        s.meth2();
    }
}

