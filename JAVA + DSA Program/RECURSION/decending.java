//print n to 1 numbers in descending order
public class decending {
    public static void descending(int n) {
        if(n==1){
            System.out.println(n);
            return;
        }
        System.out.println(n + " ");
        descending(n - 1);
    }
    public static void main(String[] args){
        int n = 10;
        descending(n);
        // Output: 10 9 8 7 6 5 4  3 2 1 

    }
}