public class factorial {

    public static void main(String[] args) {
        int n = 5;
        int result = factorials(n);
        System.out.println("Factorial of " + n + " is: " + result);
        // Output: Factorial of 5 is: 120
    }
    public static int factorials(int n){
        if(n == 0){
            return 1;
        }
        return n * factorials(n -1);

    }    
}
