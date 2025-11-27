public class sumFirstNnumber {
    public static int sum(int n){
        if(n == 1){
            return 1;
        }
        return n + sum(n - 1);
    }
    public static void main(String[] args) {
        int n = 10;
        int result = sum(n);
        System.out.println("Sum of first " + n + " numbers is: " + result);
        // Output: Sum of first 10 numbers is: 55
        
    }
}
