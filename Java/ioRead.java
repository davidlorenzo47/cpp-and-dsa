import java.io.File;
import java.io.FileInputStream;

public class ioRead {
    public static void main(String[] args) /*instead of writing tryCatch block, we can write "throws Exception here"*/ {
        try (FileInputStream fis = new FileInputStream("D:/Test.txt")) {
            int x;

            do {
                x = fis.read();
                if(x != -1) System.out.print((char)x);
            }
            while (x != -1);
        }
        catch (Exception e) {
            System.out.println(e);
        }
    }
}
