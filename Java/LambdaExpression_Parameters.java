interface Lambda1 {
    public void display(String s);
}

interface Lambda2 {
    public int add(int x, int y);
}

public class LambdaExpression_Parameters {
    public static void main(String[] args) {
        Lambda1 l1 = (s)->{System.out.println(s);};

        l1.display("This is string, printed using Lambda Expression.");

        Lambda2 l2 = (a,b) -> a+b;

        int sum = l2.add(10, 20);
        System.out.println("Sum is: "+sum);
    }
}
