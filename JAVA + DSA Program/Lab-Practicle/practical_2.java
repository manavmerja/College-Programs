import java.util.*;
public class practical_2 {

    // Simple list of bad words
    static String[] badWords = {"damn", "hell", "crap", "stupid", "idiot"};

    // Method to check and replace inappropriate words
    public static String replaceBadWords(String word) {
        for (String bad : badWords) {
            if (word.equalsIgnoreCase(bad)) {
                return "*";
            }
        }
        return word;
    }

    public static String sanitizeMessage(String input) {
        // 1. Remove extra spaces
        input = input.trim().replaceAll("\\s+", " ");

        // 2. Split into words
        String[] words = input.split(" ");
        String result = "";

        // 3. Process each word
        for (int i = 0; i < words.length; i++) {
            String word = replaceBadWords(words[i]);

            // Capitalize first letter, rest lowercase
            if (!word.equals("*")) {
                word = word.substring(0, 1).toUpperCase() + word.substring(1).toLowerCase();
            }

            result += word;

            if (i < words.length - 1) {
                result += " ";
            }
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter your chat message:");
        String input = sc.nextLine();

        String output = sanitizeMessage(input);
        System.out.println("Sanitized Message: " + output);

      sc.close();
    }
}
