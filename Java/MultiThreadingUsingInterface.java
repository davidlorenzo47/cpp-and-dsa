public class MultiThreadingUsingInterface implements Runnable {
    public void run(){
        int i = 1;
        while(true){
            System.out.print(i+"Hello ");
            i++;
        }
    }

    public static void main(String[] args) {
        MultiThreadingUsingInterface m = new MultiThreadingUsingInterface();
        Thread t = new Thread(m);
        t.start();

        int i = 1;
        while(true){
            System.out.print(i+"World ");
            i++;
        }
    }
}
