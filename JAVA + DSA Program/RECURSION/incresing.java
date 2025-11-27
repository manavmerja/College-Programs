public class incresing {
    public static void incresings(int n) {
        if(n==1){
            System.out.println(n);
            return;
        }
        incresings(n - 1);
        System.out.println(n + " ");
        
    }
    public static void main(String[] args){
        int n = 10;
        incresings(n);
        // Output: 1 2 3 4 5 6 7 8 9 10 
}
}
