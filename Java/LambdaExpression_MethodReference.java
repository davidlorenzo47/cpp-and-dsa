interface Lambda {
    public void display(String str);
}

public class LambdaExpression_MethodReference {

    public static void Reverse (String s) {
        StringBuffer sb = new StringBuffer(s);
        sb.reverse();
        System.out.println(sb);
    }
    public static void main(String[] args) {
        Lambda lm = System.out::println;
        lm.display("Hello");

        Lambda ss = LambdaExpression_MethodReference::Reverse;
        ss.display("Hello");
    }
}
