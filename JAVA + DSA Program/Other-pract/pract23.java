// Problem Definition:
// You are building a utility to scan long input strings to find all occurrences
// of a given pattern (substring or regex) with performance optimization. This
// is designed for competitive programming inputs with 106+ characters.

import java.util.regex.*;
import java.util.*;


//Approach 1
class long_string_operations{

    //find all occurences of a pattern in a long string

    public static int findStrOccur(String text, String patterns)
    {
        Pattern p=Pattern.compile("(?="+patterns+")");
        
        Matcher m=p.matcher(text);

        int count = 0;
        while(m.find()) {
            count++;
        }
        return count;
    }


    //replace all occurrences of a pattern in a long string
    public static String replaceStr(String text, String pattern) {
        return text.replaceAll(pattern, "");
        
    }
}

class long_string{

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter a long string (input will be repeated 1000 times):");
        long a, b;
        String input=sc.nextLine();

        String input1=input.repeat(1000);

        System.out.println("Input String pattern to find: ");
        String pattern=sc.nextLine();

        // Finding occurrences of the pattern
        a=System.nanoTime();
        int occurrences = long_string_operations.findStrOccur(input1, pattern);
        b=System.nanoTime();
        

        System.out.println("Time taken:"+ (b-a)+" nanoseconds");
        System.out.println("Time taken in seconds: " + (b-a)/1e9 + " seconds");
        System.out.println("Occurrences: "+ occurrences);
        System.out.println("-----------------------------------------------------------------");
        System.out.println();

        // Replacing occurrences of the pattern
        String replaced = long_string_operations.replaceStr(input1, pattern);
        System.out.println("Replaced String: "+ replaced);
    }



}