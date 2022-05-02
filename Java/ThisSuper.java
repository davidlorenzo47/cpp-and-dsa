class Rectangle{
    int length;
    int breadth;
    int x = 20;
    Rectangle(int length, int breadth){
        this.length = length;
        this.breadth = breadth;
    }
}

class Cuboid extends Rectangle{
    int height;
    int x = 10;
    Cuboid(int l, int b, int h){
        super(l,b);
        height = h;
    }

    void display(){
        System.out.println(super.x);
        System.out.println(x);
    }
    int volume(){
        return length*breadth*height;
    }
}

public class ThisSuper {
    public static void main(String[] args){
        Cuboid c = new Cuboid(10, 20, 30);
        c.display();
        System.out.println(c.volume());
    }
}
