interface Lambda {
    public void display(String str);
}

public class LambdaExpression_MethodReference {
    public static void main(String[] args) {
        Lambda lm = System.out::println;
        lm.display("Hello");
    }
}
