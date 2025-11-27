public class printXpowerOPTIMIZ {

    public static int power(int a,int n) {
        if(n == 0){
            return 1;
        }
        int halfPower = power(a,n/2);
        int powerss = halfPower *halfPower;

        if(n%2 != 0){
            powerss = a * halfPower;
        }
        return halfPower;
    }
    public static void main(String[] args) {
        int a =2;
        int n = 10;
        System.out.println(power(a, n));
    }
}
