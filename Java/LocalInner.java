class Outer
{
    int x=10;
    static int y=20;
    
    static class My
    {
        public void show()
        {
            System.out.println(y);  //we cannot print x because it is not a static member.
        }
    }
}

public class LocalInner 
{
    public static void main(String[] args) 
    {
        Outer.My m=new Outer.My();
        m.show();
    }
}
