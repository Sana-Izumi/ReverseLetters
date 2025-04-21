import java.util.Scanner;

public class ReverseWords {
    public static String reverseEachWord(String input) {
        String[] words = input.split(" ");
        StringBuilder result = new StringBuilder();

        for (String word : words) {
            StringBuilder reversed = new StringBuilder(word);
            result.append(reversed.reverse().toString()).append(" ");
        }

        return result.toString().trim();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); // Create Scanner object
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();        // Read input from user

        String output = reverseEachWord(input);
        System.out.println("\nOutput: " + output);
    }
    
    /*
    public static void main(String[] args) {
        String input = "I LOVE AUTOMATA";
        String output = reverseEachWord(input);
        System.out.println("Output: " + output);
    }
    */
}
