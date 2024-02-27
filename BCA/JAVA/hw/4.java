//4. WAP to check weather a given year is a leap year with function

import java.util.Scanner;

class Year{
    public static void leap(int a){
        if(a%4==0)
        {
            System.out.println(a + " is a leap year.");
        }
        else
        {
            System.out.println(a + " is not a leap year.");
        }
    }
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Year: ");
        int year = sc.nextInt();

        leap(year);

        sc.close();
    }
}
