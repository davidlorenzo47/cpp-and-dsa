import java.io.*;

class Student
{
    int rollno;
    String name;
    String dept;
}

public class ioPrintStream 
{
    public static void main(String[] args) throws Exception
    {
        FileOutputStream fos=new FileOutputStream("D:\\Student.txt");
        PrintStream ps=new PrintStream(fos);
        
        
        Student s=new Student();
        s.rollno=10;
        s.name="John";
        s.dept="CSE";
        
        ps.println(s.rollno);
        ps.println(s.name);
        ps.println(s.dept);
        
        ps.close();
        fos.close();

        // To read data from file
        // FileInputStream fis=new FileInputStream("D:\\Student.txt");
        // BufferedReader br = new BufferedReader(new InputStreamReader(fis));

        // Student st=new Student();
        // st.rollno= Integer.parseInt(br.readLine());
        // st.name=br.readLine();
        // st.dept=br.readLine();

        // System.out.println("Roll No.: " + st.rollno);
        // System.out.println("Name: " + st.name);
        // System.out.println("Department: " + st.dept);
        
        // fis.close();
        // br.close();
        
    }    
}
