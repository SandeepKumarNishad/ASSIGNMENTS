                                  //Assignment 13 recursion
/*#include<stdio.h>
int printN(int n)                //13.1
{
   if(n==0)
   return 0;
   else
   return(n+printN(n-1));

}
int main()
{
int n;
printf("please enter the number\n");
scanf("%d",&n);
printf("%d",printN(n));
return 0;
}

#include<stdio.h>
int printN(int n)                //13.2
{
   if(n==0)
   return 0;
   else
   return(2*n-1+printN(n-1));
}
int main()
{
int n;
printf("please enter the number\n");
scanf("%d",&n);
printf("%d",printN(n));
return 0;
}
#include<stdio.h>
int printN(int n)                //13.4
{
   if(n==0)
   return 0;
   else
   return(n*n+printN(n-1));

}
int main()
{
int n;
printf("please enter the number\n");
scanf("%d",&n);
printf("%d",printN(n));
return 0;
}
#include<stdio.h>
int sum_of_digit(int n)          //13.5
{
    if(n==0)
    return;
    else
       return(n%10+sum_of_digit(n/10));


}
int main()
{
int n;
printf("please enter the number\n");
scanf("%d",&n);
printf("%d",sum_of_digit(n));
return 0;
}

#include<stdio.h>
int factorial(int n)                       //13.6
{
    if(n==0)
    return 1;
    else
       return(n*factorial(n-1));
}
int main()
{
printf("%d ",factorial(6));
return 0;
}
// 7.Write a recursive function to calculate HCF of two number.
#include<stdio.h>
int HCF(int,int);
int main()
{
   int a=0,b=0;
   printf("please enter the two number\n");
   scanf("%d%d",&a,&b);
   if(a<b)
   {
     a=a+b;
     b=a-b;
     a=a-b;
   }
   printf("HCF is %d ",HCF(b,a%b));     //long division method
   return 0;
}
int HCF(int a,int b)
{
    if(b==0)
    return a;
    else
     return HCF(b,a%b);
}
//8.Write a recursive function to print first N terms of Fibonacci series.
#include<stdio.h>
int fib(int);
int main()
{
    int i,n=0;
    printf("please enter the terms\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     printf("%d ",fib(i));
    }
    return 0;
}
int fib(int n )
{
   if(n==0||n==1)
   return n;
   else
   return fib(n-1)+fib(n-2);
}

#include<stdio.h>    //13.10
int power(int,int);
int main()
{
int a,b;
printf("please enter the number and its power\n");
scanf("%d%d",&a,&b);
printf("%d",power(a,b));
return 0;
}
int power(int number,int p)
{
if(p==1)
return;
else
return(number*power(number,p-1));
}


