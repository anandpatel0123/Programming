package JAVA.Basics;
import java.util.Scanner;
import java.lang.*;
public class check_vovel {
    public static void  main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enetr any Alphabet :");
        char c = scan.next().charAt(0);
        if((c == 'a' || c == 'A') || (c == 'e' || c == 'E') 
            || (c == 'i' || c == 'I') || (c == 'o' || c == 'O') 
            || c == 'u' || c == 'U') {

            System.out.println("Character is Vowel");
            
        }
        else{
            System.out.println("Character is Consonant");
        }
    }
}
