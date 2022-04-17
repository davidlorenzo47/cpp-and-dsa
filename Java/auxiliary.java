public class auxiliary {

    public static int[] decode(int[] encoded, int first) {
        int[] ans = new int[encoded.length + 1];
        ans[0] = first;
        for (int i = 1; i < ans.length; i++) {
            ans[i] = encoded[i-1]^ans[i-1];
        }
        return ans;
    }
        public static void main(String[] args) {
        int[] arr = new int[]{6,2,7,3};
        int[] ans = new int[arr.length + 1];
        ans = decode(arr,4);
        for (int i = 0; i < ans.length; i++) {
            System.out.print(ans[i]+" ");
        }
    }
}