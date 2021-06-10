package JAVA.Basics;
import java.util.*;
class check_capital{
    public static void  main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enetr any Alphabet :");
        char c = scan.next().charAt(0);
        
        while(!((c>=65 && c<=91) || (c>=97 && c<=122))){
            System.out.println("Invalid Character");
            System.out.println("Enetr any Alphabet :");
            c = scan.next().charAt(0);
        }
        if(c >= 65 && c <= 91) {
            System.out.println("Capital");
        }
        else{
            System.out.println("Small");
        }
    }
}