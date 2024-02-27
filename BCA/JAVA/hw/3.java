//3. WAP to calculate area of a Triangle with function

import java.util.Scanner;

class Triangle{
    public static void area(float a, float b){
        float c = (b*a)/2;
        System.out.println("Area of Triangle: " + c);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Triangle base : ");
        float base = sc.nextFloat();
        
        System.out.print("Enter Triangle height : ");
        float height = sc.nextFloat();

        area(base,height);

        sc.close();
    }
}
