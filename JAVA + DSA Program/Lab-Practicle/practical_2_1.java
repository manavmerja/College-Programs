import java.util.Scanner;

public class practical_2_1 {

   static String badword[] = {"damm","shit","idiot"};

    public static String badword(String word){
        for(int i=0;i<badword.length;i++){
            if(word.equalsIgnoreCase(word)){
                return "*";
            }

        }
        return word;
    }

    public static String main(String[] args) {
        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter your message: ");
        String message = sc.nextLine();


    }
}
