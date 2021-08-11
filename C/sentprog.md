# 1. Function types:

<details>
<summary>1. No Input  No  Return.</summary>

```c
//No Input  No  Return..
#include<stdio.h>
#include<conio.h>
void add(void);
void main()
{
    clrscr();
    add();
    getch();
}
void add()
{
    int num1,num2,sum=0;
    printf("Enter Two Number.\n");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("Result=%d",sum);
}

```

</details>

<details>
<summary>2. No Input  With  Return.</summary>

```c
//No Input  With  Return..
#include<stdio.h>
#include<conio.h>
int add(void);
void main()
{
    int result;
    clrscr();
    result=add();
    printf("Result=%d",result);
    getch();
}
int add(void)
{
    int num1,num2,sum=0;
    printf("Enter Two Number.\n");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    return sum;
}		

```

</details>

<details>
<summary>3. Input But No  Return.</summary>

```c
// Input But No  Return..
#include<stdio.h>
#include<conio.h>
void add(int,int);
void main()
{
    int num1,num2;
    clrscr();
    printf("Enter Two Number.\n");
    scanf("%d %d",&num1,&num2);
    add(num1,num2);
    getch();
}
void add(int a,int b)
{
    int sum;
    sum=a+b;
    printf("Result=%d",sum);
}

```

</details>

<details>
<summary>4. Input With Return.</summary>

```c
// Input With Return..
#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
    int num1,num2,sum;
    clrscr();
    printf("Enter Two Number.\n");
    scanf("%d %d",&num1,&num2);
    sum=add(num1,num2);
    printf("Result=%d",sum);
    getch();
}
int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}	     

```

</details>


<br>

# 2. Programs with function:

<details>
<summary>1. Armstrong Number using Function.</summary>

```c
//Armstrong Number using Function.//

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,arm,p;
    int armstrong(int);
    clrscr();
    printf("\nEnter a Number:\n");
    scanf("%d",&n);
    p=n;
    arm=armstrong(n);
    if(arm==p)
        printf("Armstrong Number:");
    else
        printf("Not a Armstrong Number.");
    getch();
}

int armstrong(int num)
{
    int ld,sum=0;
    while(num>0)
    {
        ld=num%10;
        sum+=ld*ld*ld;
        num=num/10;
    }

    return(sum);
}   	 
```
</details>

<details>
<summary>2. Greatest among array using Function with Array.</summary>

```c
//Greatest among array using Function with Array.//

#include<stdio.h>
#include<conio.h>

void main()
{
    int x;
    int large(int arr[],int n);
    int value[5]={1,5,9,7,6};
    clrscr();
    x=large(value,5);
    printf("%d",x);
}

int large(int arr[],int n)
{
    int i;
    int max=arr[0];
    for(i=1;i<n;i++)
        if(max<arr[i])
            max=arr[i];
    return max;
}
```

</details>

<details>
<summary>3. Count Number of Digits using Function.</summary>

```c
//Count Number of Digits using Function.//

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,count;
    int countdigit(int);
    clrscr();
    printf("\nEnter a Number:\n");
    scanf("%d",&n);
    count=countdigit(n);
    printf("Number Of Digits:%d",count);
    getch();
}

int countdigit(int num)
{
    int ld,c=0;
    while(num>0)
    {
        ld=num%10;
        c=c+1;
        num=num/10;
    }

    return(c);
}   
```

</details>

<details>
<summary>4. Reverse Of a Number using Function.</summary>

```c
//Reverse Of a Number using Function.//

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,rev;
    int reverse(int);
    clrscr();
    printf("\nEnter a Number:\n");
    scanf("%d",&n);
    rev=reverse(n);
    printf("Reverse Number:%d",rev);
    getch();
}

int reverse(int num)
{
    int ld,reve=0;
    while(num>0)
    {
        ld=num%10;
        reve=reve*10+ld;
        num=num/10;
    }

    return(reve);
}   
```

</details>

<details>
<summary>5. Factorial of a Number using Function.</summary>

```c
//Factorial of a Number using Function.//

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,fact;
    int factorial(int);
    clrscr();
    printf("\nEnter a Number:\n");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial Of a Number:%d",fact);
    getch();
}

int factorial(int num)
{
    int fa=1,a;
    for(a=1;a<=num;a++)
    {
        fa=fa*a;
    }
    return(fa);
}   
```

</details>

<details>
<summary>6. Function  With Array..(Display sum of Elements).</summary>

```c
//Function  With Array..(Display sum of Elements)//

#include <stdio.h>
#include <conio.h>

int add(int num [],int n);

void main()
{
    int arr[5];
    int i;
    clrscr();
    printf("Enter Five NUmbers: \n");

    for(i=0 ; i<5 ; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nTheir sum is: %d\n", add(arr,5));

}

int add(int num[],int n)
{
    int sum = 0;
    int i;

    for(i=0 ; i<n ; i++)
    {
        sum+=num[i];
    }
    return sum;
}

```

</details>

<details>
<summary>7. Prime Factors of a Number.</summary>

```c
//Prime Factors of a Number.//
#include <stdio.h>
#include<conio.h>

void primefact(int num);

void main()
{

    int num;
    clrscr();
    printf("Enter Number.\n");
    scanf("%d",&num);
    primefact(num);

    getch();
}

void primefact(int num)
{
    int i;
    for(i=2;num!=1;i++)
    {
        while(num%i==0)
        {
            printf("%d \n",i);
            num=num/i;
        }
    }
}

```

</details>

<br>

# 3. Programs with Recursion:

<details>
<summary>1. Display Number From 1 to 10 using Recursion.</summary>

```c

//Display Number From 1 to 10 usinf Recursion.//


#include<stdio.h>
#include<conio.h>

void main()
{
    int disp(int);

    int n=1;
    clrscr();
    disp(n);
}

int disp(int n)
{
    if(n<0)
        return 0;
    else
        if(n<=10)
        {
            printf("%d",n);
            disp(n+1);
        }
    return 0;
}    

```

</details>

<details>
<summary>2. Factorial of a Number using recursion.</summary>

```c
//Factorial of a Number using recursion.//

#include<stdio.h>
#include<conio.h>
main()

{
    int a, fact;
    printf("\nEnter any number: ");
    scanf ("%d", &a);
    fact=rec (a);
    printf("\nFactorial Value = %d", fact);
    getch();
    return 0;
}
rec (int x)
{
    int f;
    if (x==1)
        return (1);
    else
        f=x*rec(x-1);
    return (f);
}
```

</details>

<details>
<summary>3. LCM & HCF  of two Numbers Using recursion.</summary>

```c
//LCM & HCF  of two Numbers Using recursion.//

#include<stdio.h>
#include<conio.h>

int hcf(int,int);
int lcm(int,int);
int x,y;

void main()
{
    int n1,n2;
    clrscr();
    printf("Enter 2 Numbers.\n");
    scanf("%d %d",&n1,&n2);
    printf("HCF of %d & %d is %d\n",n1,n2,hcf(n1,n2));
    x=n1,y=n2;
    printf("LCM of %d & %d is %d\n",n1,n2,lcm(n1,n2));
    getch();
}

int hcf(int a,int b)
{
    if(a==b)
        return (b);
    else
        if(a<b)
            hcf(a,b-a);
        else
            hcf(a-b,b);
}


int lcm(int a,int b)
{
    if(a==b)
        return (b);
    else
        if(a<b)
            lcm(a+x,b);
        else
            lcm(a,b+y);
}
```

</details>

<details>
<summary>4. Prime Factors of a Number Using Recursion.</summary>

```c
//Prime Factors of a Number Using Recursion.//
#include <stdio.h>
#include<conio.h>

void primefact(int num);

void main()
{

    int num;
    clrscr();
    printf("Enter Number.\n");
    scanf("%d",&num);
    primefact(num);
    getch();
}

void primefact(int num)
{
    static int i=2;
    if(num==1)
        return;
    else
    {
        while(num%i==0)
        {
            printf("%d \n",i);
            num=num/i;
        }
        i++;
        primefact(num);
    }
}

```

</details>

<details>
<summary>5. Reverse of a Number using recursion.</summary>

```c
//Reverse of a Number using recursion//

#include<stdio.h>
#include<conio.h>

void reverse(int n);


void  main()

{
    int num;
    clrscr();
    printf("Enter  Number.\n");
    scanf("%d",&num);
    reverse(num);
    getch();
}
void reverse(int n)
{
    int rem;
    if(n==0)
        return;
    else
    {
        rem=n%10;
        printf("%d",rem);
        n=n/10;
        reverse(n);
    }
}		

```

</details>

<details>
<summary>6. Count Digits using Recursion.</summary>

```c
//Count Digits using Recursion//
#include <stdio.h>
#include<conio.h>

int countdigit(int n1);

void main()
{

    int num,count;
    clrscr();
    printf("Enter Number.\n");
    scanf("%d",&num);
    count=countdigit(num);
    printf("No of Digits=  %d\n",count);
    getch();
}

int countdigit(int num)
{
    int ld,c=0;
    if(num<=0)
        return 0;
    else
        if(num>0)
        {
            ld=num%10;
            c=c+1+countdigit(num/=10);
        }
    return (c);
}

```

</details>

<details>
<summary>7. Sum of Digits of a Number Using recursion.</summary>

```c
//Sum of Digits of a Number Using recursion//

#include<stdio.h>
#include<conio.h>

int sum(int num);

void main()
{
    int n,s;
    clrscr();
    printf("Enter Numbers.\n");
    scanf("%d",&n);
    s=sum(n);
    printf("\nSum of Digit of %d is %d",n,s);

    getch();
}
int sum(int num)
{
    int ld,su=0;
    if(num<=0)
        return 0;
    else
        if(num>0)
        {
            ld=num%10;
            su=su+ld+sum(num/=10);
        }
    return (su);
}
```

</details>

<br>                                    

# 4. Pointer calling:

<details>
<summary>1. Swapping program using call By address/call by pointer.</summary>

```c
//swapping program using call By address/call by pointer.//


#include <stdio.h>
#include <conio.h>
void swap(int* ,int*);
void main()
{
    int a = 23, b = 47;
    clrscr();
    printf("Before. a: %d, b: %d\n", a, b);
    swap(&a, &b);
    printf("After . a: %d, b: %d\n", a, b);
    getch();
}

void swap(int *i, int *j)
{
    int t = *i;
    *i = *j;
    *j = t;

}

```

</details>

