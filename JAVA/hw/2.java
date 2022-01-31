// 2. WAP to calculate area of a Square with function
import java.util.Scanner;

class Square{

    public static void area(float a){
        float b = a*a;
        System.out.println("Area of Square: " + b);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Square's arm length: ");
        float arm = sc.nextFloat();

        area(arm);

        sc.close();
    }

}
