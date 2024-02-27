# Date 31/01/2022

1. WAP to calculate simple interest with function

```java
// 1. WAP to calculate simple interest with function
import java.util.Scanner;

class s_interest{

    public static float interest(float a, float b, float c)
    {
        float i = (a*b*c)/100;
        return i;
    }

    public static void main(String[] args){


        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the principal: ");
        float principal = sc.nextFloat();

        System.out.print("Enter the rate: ");
        float rate = sc.nextFloat();

        System.out.print("Enter the time: ");
        float time = sc.nextFloat();

        float sm_in = interest(principal,rate,time);

        System.out.println("Principal: " + principal);
        System.out.println("Interest Rate: " + rate);
        System.out.println("Time Duration: " + time);
        System.out.println("Simple Interest: " + sm_in);

        sc.close();

    }
}
```

2. WAP to calculate area of a Square with function

```java
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
```

3. WAP to calculate area of a Triangle with function

```java
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
```

4. WAP to check weather a given year is a leap year with function

```java
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
```

5. WAP to calculate area of a Rectangle with function

```java
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
```

