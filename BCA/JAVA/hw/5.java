//5. WAP to calculate area of a Rectangle with function 

import java.util.Scanner;

class Rectangle{
    public static void area(float a, float b){
        float c = a*b ;

        System.out.println("Area of Rectangle: " + c);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Rectangle length: ");
        float length = sc.nextFloat();

        System.out.print("Enter Rectangle width: ");
        float width = sc.nextFloat();

        area(length,width);

        sc.close();
    }
}
