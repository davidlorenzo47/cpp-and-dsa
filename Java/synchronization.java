//Two ways of synchronization

// 
// class Mydata{
    // below block becomes monitor so only one thread is allowed at a time.
    // synchornized(this) {
//     public void display(String str) {
    // Below piece of code is called critical section as it may be executed simultaneously by multiple threads.
//         for (int i = 0; i < str.length(); i++) {
//             System.out.print(str.charAt(i));
//         }
//     }
// }
// }

class Mydata{
    synchronized public void display(String str) {
        for (int i = 0; i < str.length(); i++) {
            System.out.print(str.charAt(i));
        }
    }
}

class Thread1 extends Thread {
    Mydata d;
    public Thread1(Mydata d) {
        this.d = d;
    }

    public void run() {
        d.display("Hello World Hello World Hello World Hello World Hello World");
    }
}

class Thread2 extends Thread {
    Mydata d;
    public Thread2(Mydata d) {
        this.d = d;
    }

    public void run() {
        d.display("Welcome Welcome Welcome Welcome Welcome Welcome Welcome Welcome");
    }
}

public class synchronization {
    public static void main(String[] args) {
        Mydata data = new Mydata();

        Thread1 t1 = new Thread1(data);
        Thread2 t2 = new Thread2(data);

        t1.start();
        t2.start();
    }
}