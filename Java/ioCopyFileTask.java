import java.io.*;

public class ioCopyFileTask {
    public static void main(String[] args) throws Exception {
        FileInputStream f1 = new FileInputStream("D:/Text1.txt");
        FileOutputStream f2 = new FileOutputStream("D:/Text2.txt");

        int b;
        while ((b = f1.read()) != -1) {
            if (b >= 65 && b <= 90) f2.write(b+32); 
            else f2.write(b);
        }
        f1.close();
        f2.close();
    }
}
