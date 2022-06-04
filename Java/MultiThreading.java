class MultiThreading extends Thread {

    public void run() {
        int i = 1;
        while(true){
            System.out.print(" Hello ");
            i++;
        }
    }
    public static void main(String[] args) {
        MultiThreading t = new MultiThreading();
        t.start();
        int i = 1;
        while (true) {
            System.out.print("World");
            i++;
        }
    }
}