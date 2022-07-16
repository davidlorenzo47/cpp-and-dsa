import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.SequenceInputStream;

public class ioCopyFromTwoFiles {
    public static void main(String[] args) throws Exception {
        FileInputStream Source1 = new FileInputStream("D:/Source1.txt");
        FileInputStream Source2 = new FileInputStream("D:/Source2.txt");

        FileOutputStream destination = new FileOutputStream("D:/destination.txt");

        SequenceInputStream sis = new SequenceInputStream(Source1, Source2);

        int b;
        while ((b = sis.read()) != -1) {
            destination.write(b);
        }
        
        Source1.close();
        Source2.close();
        destination.close();
        sis.close();
    }
}
