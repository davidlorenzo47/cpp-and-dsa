import java.io.*;
import java.util.Date;

public class FileClass 
{
    public static void main(String[] args) throws Exception
    {

        // select path of any directory on you computer
        File f=new File("D:\\cpp-java-and-dsa\\Java");
        //to try different methods of File, type f. , then different methods will appear (I am using VS Code).
        System.out.println(f.isDirectory());
        File list[]=f.listFiles();
        for(File x:list)
        {
            long millisec = x.lastModified();
            Date dt = new Date(millisec);
            System.out.println(x.getParent()+" "+x.getName()+" "+"File was Last modified on: "+dt);
        }
      
    }
}