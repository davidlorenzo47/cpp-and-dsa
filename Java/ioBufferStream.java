import java.io.*;

public class ioBufferStream 
{
    public static void main(String[] args)throws Exception 
    {
        FileReader fis=new FileReader("D:/Text2.txt");
        BufferedReader bis=new BufferedReader(fis);
        
        System.out.print((char)bis.read()+" ");
        System.out.print((char)bis.read()+" ");
        System.out.print((char)bis.read()+" \n");

        bis.mark(10); //it will mark a character.
        System.out.println("Read Ahead Limit is set to 10.");
        System.out.print((char)bis.read()+" "); //marked on this character.
        System.out.print((char)bis.read()+" \n");

        bis.reset(); //This will reset and go back to marked character.
        System.out.println("Reset Done.");
        System.out.print((char)bis.read()+" "); //Now, the marked character wil be printed.
        System.out.print((char)bis.read()+"\n");
        
        System.out.println("String is: "+bis.readLine());
        bis.close();
        
        
    }    
}
