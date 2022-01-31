// 1. WAP to calculate simple interest with function
import java.util.Scanner;

class s_interest{

    public static float interest(float a, float b, float c)
    {
        float i = (a*b*c)/100;
        return i;
    }

    public static void main(String[] args){


        Scanner input = new Scanner(System.in);

        System.out.print("Enter the principal: ");
        float principal = input.nextFloat();

        System.out.print("Enter the rate: ");
        float rate = input.nextFloat();

        System.out.print("Enter the time: ");
        float time = input.nextFloat();

        float sm_in = interest(principal,rate,time);

        System.out.println("Principal: " + principal);
        System.out.println("Interest Rate: " + rate);
        System.out.println("Time Duration: " + time);
        System.out.println("Simple Interest: " + sm_in);

    }
}
