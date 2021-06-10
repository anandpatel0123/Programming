package JAVA.Basics;
import java.util.*;

public class functions {
    static int sum(int a,int b){
        int s = a+b;
        return s;
    }
    static int sub(int a,int b){
        if(a>b) return a-b;
        else return b-a;
    }
    static int mul(int a,int b){
        return a*b;
    }
    static int div(int a,int b){
        return a/b;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter 1 to Add or 2 to Sub or 3 to Mul or 4 to Divide : ");
        int key = scan.nextInt();

        do{
            if(key == 1){
                System.out.println("Enter Value of a and b :");
                int x = scan.nextInt();
                int y = scan.nextInt();
                int sum = sum(x,y);
                System.out.println("Sum = "+sum);
            }
            else if(key == 2){
                System.out.println("Enter Value of a and b :");
                int x = scan.nextInt();
                int y = scan.nextInt();
                System.out.println("Sub = "+sub(x,y));
            }
            else if(key == 3){
                System.out.println("Enter Value of a and b :");
                int x = scan.nextInt();
                int y = scan.nextInt();
                System.out.println("Multiplication = "+mul(x,y));
            }
            else if(key == 4){
                System.out.println("Enter Value of a and b :");
                int x = scan.nextInt();
                int y = scan.nextInt();
                System.out.println("Division = "+div(x,y));
            }
            else{
                System.out.println("you Have Enter Wrong Input!!\n Please Try Again!!");
            }
            System.out.println("Enter 1 to Add or 2 to Sub or 3 to Mul or 4 to Divide : ");
            key = scan.nextInt();
        }while(key<5 && key>0);
        scan.close();
    }
    
}
