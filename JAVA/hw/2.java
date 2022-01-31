// 2. WAP to calculate area of a Square with function
import java.util.Scanner;

class Square{

    public static float area(float a){
        float b = a*a;
        return b;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter arm length: ");
        float arm = sc.nextFloat();

        float sq_area = area(arm);

        System.out.println("Area of Square: " + sq_area);
    }

}
