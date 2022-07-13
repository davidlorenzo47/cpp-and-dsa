interface MyLambda
{
    public void display();
}

class UseLambda
{
    public void callLambda(MyLambda ml) //Lambda Expression can be passed as a parameter.
    {
        ml.display(); 
    }
}

class Demo
{
    public void method1(){
        UseLambda ul=new UseLambda();
        ul.callLambda(()->{System.err.println("Hello");});
        
    /*int temp=10; //this variable can be modified inside method having Lambda Expression.
    
    public void method1()
    {
        *int count=0; //As this variable is inside method having Lambda Expression, it cannot be modified.
        
        MyLambda ml=()->
        {
            //int count=0;
            //count++;
            int x=0;
            System.out.println("Hi");
            System.out.println("Bye"+(++temp));
        };
    }
        ml.display();*/
    }
}
public class CpatureLambdaExpressions {

    public static void main(String[] args) {
        Demo d=new Demo();
        d.method1();
    }
    
}