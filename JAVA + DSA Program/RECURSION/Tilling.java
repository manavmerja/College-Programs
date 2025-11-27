public class Tilling {
    public static int countWays(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        // vertical
        int vertical = countWays(n-1);

        // horizontal
        int horizontal = countWays(n-2);    

        int totalWays = vertical + horizontal;
        // Return the total number of ways to fill the wall
        return totalWays;
    }
      public static void main(String[] args) {
        int n = 4; // Length of the wall
        System.out.println(countWays(n));
      }
}