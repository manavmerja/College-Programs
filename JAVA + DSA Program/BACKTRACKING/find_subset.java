public class find_subset {

    public static void findsubsets(String str,int i, String ans) {
        if (i == str.length()) {
            System.out.println(ans);
            return;
        }
        // yes choise
        findsubsets(str, i+1, ans + str.charAt(i));
        // no choice
        findsubsets(str, i+1, ans);
        
    }
    public static void main(String[] args) {
        String str = "abc";
        findsubsets(str, 0, "");
    }
}
