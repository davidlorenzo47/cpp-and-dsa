class Super{
    void display(){
        System.out.println("This is Super Class");
    }
}

class Sub extends Super{
    @Override   //for overriding we write "@Overriding"
    void display(){
        System.out.println("This is Sub Class");
    }
}

public class MethodOverriding {
    public static void main(String args[]){
        Super sup = new Super();
        sup.display();

        Sub s = new Sub();
        s.display();

        /*
        For dynamic method dispatch we remove the "@Overriding" in the Sub Class and in the main function we write.
        Super sub = new Sub();  //this is called dynamic method dispatch. Here Super is reference and object is of Sub.
        sub.display();  //this will call display from sub class.    
         */
    }
}
