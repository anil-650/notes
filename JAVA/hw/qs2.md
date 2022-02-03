# Date: 03/02/2022

1. WAP a program to calculate the area of Triangle, Rectangle, Square using method overloading

```java
// WAP a program to calculate the area of Triangle, Rectangle, Square using method overloading

import java.util.Scanner;

class ClacArea{
    public static void area(float a, float b){
        System.out.println("Area of Triangle: "+(a*b)/2);
    }
    public static void area(double c, double d){
        System.out.println("Area of Rectangle: "+c*d);
    }
    public static void area(float a){
        System.out.println("Area of Square: "+a*a);
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number which of area you want to calculate");
        System.out.printf("\n[1] Triangle\n[2] Rectangle\n[3] Square\n\nChoice : ");

        int choice = sc.nextInt();

        switch(choice){
            case 1:
                System.out.print("\nTriangle:\nEnter Triangle's height: ");
                float height = sc.nextFloat();
                System.out.print("Enter Triangle's base: ");
                float base = sc.nextFloat();

                area(height,base);
                sc.close();
                break;

            case 2:
                System.out.print("\nRectangle:\nEnter Rectangle's length: ");
                double length = sc.nextDouble();
                System.out.print("Enter Rectangle's width: ");
                double width = sc.nextDouble();

                area(length,width);
                sc.close();
                break;

            case 3:
                System.out.print("\nSquare:\nEnter Square's arm length: ");
                float arm = sc.nextFloat();

                area(arm);
                sc.close();
                break;

            default:
                System.out.println("Invalid Choice. Pls Enter a valid number");
                break;
        }
    }
}
```
