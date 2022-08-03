import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;

public class ioSerializationDemo {
    public static void main(String[] args) throws Exception {
        
        // For writing in text file
        FileOutputStream fos = new FileOutputStream("Demo.txt");
        DataOutputStream dos = new DataOutputStream(fos);

        float list[] = {10.1f, 20.2f, 30.3f, 40.4f, 50.5f};

        dos.writeInt(list.length);
        for (float f : list) {
            dos.writeFloat(f);
        }

        dos.close();
        fos.close();

        // For reading from text file
        // FileInputStream fis = new FileInputStream("Demo.txt");
        // DataInputStream dis = new DataInputStream(fis);

        // int length = dis.readInt();
        // for (int i = 0; i < length; i++) {
        //     System.out.println(dis.readFloat());
        // }

        // dis.close();
        // fis.close();
    }
}
