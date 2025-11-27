public class fibonacci {
    public static int fibonaki(int n){
        if(n == 0 || n == 1){
            return n;
        }
        int m = fibonaki(n - 1) + fibonaki(n - 2);
        return m;
    }
    public static void main(String[] args){
        int n = 10;
        int result = fibonaki(n);
        System.out.println("Fibonacci of " + n + " is: " + result);
    }
}
