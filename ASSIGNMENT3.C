/*
1. Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>
int main()
{
    int a;
    printf("please enter the number\n");
    scanf("%d",&a);
    if(a<=0)
    printf("Non positive");
    else
    printf("positive");
    return 0;
}
2. Write a program to check whether a given number is divisible by 5 or not


#include<stdio.h>
int main()
{
    int number;
    printf("please enter the number\n");
    scanf("%d",&number);
    if(number%5==0)
    printf("number is divisible by 5");
    else
     printf("number is NOT divisible by 5");
     return 0;
}
3. Write a program to check whether a given number is an even number or an odd 
number.
#include<stdio.h>
int main()
{
    int number=0;
    printf("Enter the number\n");
    scanf("%d",&number);
    if(number%2==0)
    printf("number is EVEN");
    else
    printf("number is odd");
    return 0;
}
4. Write a program to check whether a given number is an even number or an odd 
number without using % operator.


#include<stdio.h>
int main()
{
    int number=0;
    printf("please enter the number\n");
    scanf("%d",&number);
    if(number&1)
    printf("odd");
    else
    printf("even");
    return 0;
}
5. Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main()
{
    int number=0,count=0;
    printf("please enter the number\n");
    scanf("%d",&number);
    while(number)
    {
        number=number/10;
        count++;
    }
    if(count==3)
    printf("number is 3 digit");
    else
    printf("number is not 3 digit");
  return 0;

}

6. Write a program to print greater between two numbers. Print one number of both are 
the same.
#include<stdio.h>
int main()
{
    int first=0,second=0;
    printf("please enter the two number\n");
    scanf("%d%d",&first,&second);
    if(first>=second)
    printf("greater number is %d",first);
    else
    printf("greate number is %d ",second);
    return 0;
}
7. Write a program to check whether roots of a given quadratic equation are real & 
distinct, real & equal or imaginary roots
#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0;
    printf("please enter the cofficient a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b-4*a*c);
    if(d>0)
    printf("root are real and distinct");
    if(d==0)
    printf("root are real and equal");
    if(d<0)
    printf("imaginary roots");
    return 0;

}
8. Write a program to check whether a given year is a leap year or not
#include<stdio.h>
int main()
{
    int year;
    printf("please enter the year");
    scanf("%d",&year);
    if((year%4==0)||(year%400==0))
    printf("leap year");
    else
    printf("NOt leap year");
    return 0;

}
9. Write a program to find the greatest among three given numbers. Print number once 
if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    int a=0,b=0,c=0;
    printf("enter the three number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("Greatest number is %d ",a);
    else if(b>c)
    printf("Greatest number is %d ",b);
    else
    printf("Greatest number is %d ",c);
    return 0;
}

10. Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage
#include<stdio.h>
int main()
{
    float  selling_price=0,cost_price=0,profit_percentage=0,loss_percentage=0;
    printf("please enter the selling price and cost price\n ");
    scanf("%d%d",&selling_price,&cost_price);
    if(selling_price>cost_price)
    {
    profit_percentage=((selling_price-cost_price)*100)/cost_price;
    printf("profit_percentage is %f",profit_percentage);
    }
    else
    {
    loss_percentage=((cost_price-selling_price)*100)/cost_price;
    printf("loss_percentage is %f",loss_percentage);
    }
    return 0;
    
}
11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed.


 #include<stdio.h>
 int main()
 {
    int h=0,e=0,m=0,s=0,c=0;
    printf("please enter the marks h,e,m,s,c\n");
    scanf("%d%d%d%d%d",&h,&e,&m,&s,&c);
    if((h>=33)&&(e>=33)&&(m>=33)&&(s>=33)&&(c>=33))
    printf("PASS");
    else
    printf("FAILED");
    return 0;
 }
12. Write a program to check whether a given alphabet is in uppercase or lowercase.



 #include<stdio.h>
 int main()
 {
    char ch=0;
    printf("enter any character to check whether it is uppercase or lowercase\n");
    scanf("%c",&ch);
    if((ch>='a')&&(ch<='z'))
      printf("lowercase");
    if((ch>='A')&&(ch<='Z'))
    printf("UPPERCASE");
    return 0;

 }

13. Write a program to check whether a given number is divisible by 3 and divisible by 2.


 #include<stdio.h>
 int main()
 {
    int number=0;
    printf("enter the number\n");
    scanf("%d",&number);
    if((number%3==0)&&(number%2==0))
    printf("given number is divisible by 3 and divisible by 2");
    else
    printf("given number is NOT divisible by 3 and 2");
    return 0;
 }

14. Write a program to check whether a given number is divisible by 7 or divisible by 3.



 #include<stdio.h>
 int main()
 {
    int number=0;
    printf("enter the number\n");
    scanf("%d",&number);
    if(number%7==0)
    printf("given number is divisible by 7 ");
    else if(number%3==0)
    printf("given number is divisible 3 ");
    else
    printf("this number is not divisible by both(3 and 7)");
    return 0;
 }

15. Write a program to check whether a given number is positive, negative or zero.

 #include<stdio.h>
 int main()
 {
    int number=0;
    printf("please enter the number");
    scanf("%d",&number);
    if(number<0)
    printf("negative");
    else if(number>0)
    printf("positive");
    else
    printf("zero");
    return 0;
 }

16. Write a program to check whether a given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character.


  #include<stdio.h>
 int main()
 {
    char ch=0;
    printf("enter any character \n");
    scanf("%c",&ch);
    if((ch>='a')&&(ch<='z'))
      printf("alphabet (lowercase)");
    else if((ch>='A')&&(ch<='Z'))
    printf("ALPHABET(UPPERCASE)");
    else if((ch>='0')&&(ch<='9'))
    printf("digit");
    else
    printf("special character");
    return 0;

 }

17. Write a program which takes the length of the sides of a triangle as an input. Display 
whether the triangle is valid or not. 

#include<stdio.h>
int main()
{
    int s1=0,s2=0,s3=0;
    printf("please enter the value\n");
    scanf("%d%d%d",&s1,&s2,&s3);
    if((s1+s2>s3)&&(s2+s3>s1)&&(s1+s3>s2))
    printf("valid triangle");
    else
    printf("invalid triangle");
    return 0;
}
18. Write a program which takes the month number as an input and display number of 
days in that month


#include<stdio.h>
int main()
{
    int month_number=0;
    printf("please enter the month number\n");
    scanf("%d",&month_number);
    switch (month_number)
    {
        case 1:
        printf("JANUARY 31 DAYS");
        break;
        case 2:
        printf("FEBUARY 28 or 29 DAYS");
        break; 
        case 3:
        printf("MARCH 31 DAYS ");
        break; 
        case 4:
        printf("APRIL 30 DAYS");
        break; 
        case 5:
        printf("MAY 31 DAYS ");
        break; 
        case 6:
        printf("JUNE 30 DAYS");
        break; 
        case 7:
        printf("JULY 31 DAYS");
        break; 
        case 8:
        printf("AUGUST 31 DAYS");
        break;
         case 9:
        printf("SEPTEMBER 30 DAYS ");
        break; 
        case 10:
        printf("OCTOBER 31 DAYS ");
        break; 
        case 11:
        printf("NOVEMBER 30 DAYS");
        break;
        case 12:
        printf("DECEMBER 31 DAYS");
        return 0;
    }
}*/
