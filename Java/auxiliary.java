class Rectangle{
    int l, b;
    Rectangle(){
        l = b = 1;
    }
    Rectangle(int x, int y){
        l = x;
        b = y;
    }
}

class cuboid extends Rectangle{
    int h;
    cuboid(){
        h = 1;
    }
    cuboid(int z){
        h = z;
    }
    cuboid(int x, int y, int z){
        super(x, y);
        h = z;
    }
    int volume(){
        return l*b*h;
    }
}
public class auxiliary {
    public static void main(String[] args) {
        cuboid c = new cuboid(10);
        System.out.println(c.volume());
    }
}