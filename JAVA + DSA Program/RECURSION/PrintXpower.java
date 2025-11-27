public class PrintXpower {
    public static int powers(int x,int n) {
        if(n == 0){
            return 1;
        }
        return x * powers(x, n-1);

        
    }
    public static void main(String[] args) {
        int val = powers(2,10);
        System.out.println(val);
        
    }
}
