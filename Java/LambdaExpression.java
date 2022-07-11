interface Lambda {
    public void display(); // by default, methods in interface are default and abstract.
}

// No need to override the method of Lambda interface as it is overridden in the main class LambdaExpression.
// Hence, we do not need the below block of code.
/*class My implements MyLambda
{
    public void display()
    {
        System.out.println("Hello World");
    }
}*/

public class LambdaExpression {
    public static void main(String[] args) {
        //Below is the Lambda expression, wherein display method is overridden.
        Lambda lmbd = ()->{
            System.out.println("Hello World");
        };
        lmbd.display();
    }
}
