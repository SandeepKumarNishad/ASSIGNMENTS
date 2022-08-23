#include<stdio.h>//11.1
int LCM(int a,int b)
{
    int i,s=0,r=0;
    s=a<b?a:b;
    for(i=1;i<=s;i++)
    if((a%i==0)&&(b%i==0))
         r=i;
    return((a*b)/r);
}
int main()
{
   printf("LCM is %d",LCM(8,28));
   return 0;
}
#include<stdio.h>//11.2
int HCF(int a,int b)
{
    int i,s=0,r=0;
    s=a<b?a:b;
    for(i=1;i<=s;i++)
    if((a%i==0)&&(b%i==0))
         r=i;
    return(r);
}
int main()
{
   printf("HCF is %d",HCF(8,50));
   return 0;
}
#include<stdio.h>
#include<math.h>          //11.3
void primeNO(int n)
{
int i,flag=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
 flag=1;
}
if(flag==0)
printf("prime no");
else
 printf("Not a prime no");
}
int main()
{
   int n;
   printf("Please enter the number\n");
   scanf("%d",&n);
   primeNO(n);
   return 0;
}
#include<stdio.h>
#include<math.h>          //11.4
int Next_primeNO(int n)
{
while(1){
n++;
int i,flag=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
 flag=1;
}
if(flag==0)
return(n);
}
}
int main()
{
   int n;
   printf("Please enter the number\n");
   scanf("%d",&n);
    printf("%d",Next_primeNO(n));
   return 0;
}
#include<stdio.h>
void print_primeNO(int n)//check karna hai 11.5
{
int i=2,flag=0,count=0;
while(count<n)
{
for(j=2;j<=n/2;j++)
{
if(n%i==0)
 flag=1;
}
if(flag==0)
{
printf("%d");
count++;
}
i++;
}
}
int main()
{
   int n;
   printf("Please enter the number\n");
   scanf("%d",&n);
   print_primeNO(n);
   return 0;
}
#include<stdio.h>                      check karna hai 11.6
void primeNO(int a,int b)
{
int i,j,flag=0;
for(i=a+1;i<b;i++)
{
for(j=2;j<=a/2;j++)
{
if(a%j==0)
 flag=1;
}
if(flag==0)
printf("%d",a);
}
}
int main()
{
   int n,m;
   printf("Please enter two number\n");
   scanf("%d%d",&n,&m);
   primeNO(n,m);
    return 0;
}

#include<stdio.h>                            //10.8
int factorial (int a)
{
    int i,fact=1;
    for(i=1;i<=a;i++)
    fact*=i;
    return fact;
}
int combination(int n,int r)
{
   return(factorial(n)/(factorial(r)*factorial(n-r)));
}
void pascalTriangle(int n)
{
       int i,j;
       for(i=0;i<5;i++)
       {
       for(j=0;j<=i;j++)
       {
          printf("%d",combination(i,j));
       }
       printf("\n");
       }
}
int main()
{
  pascalTriangle(5);
  return 0;
}
#include<stdio.h>
int square(int n,int m)           //11.9
{
    int i,j,s=1;
    for(i=1;i<=m;i++)
      s*=n;
      return s;
}
int main()
{
    printf("%d",square(8,4));
    return 0;
}
//11.10
#include<stdio.h>
float sum_of_series(int n)
{
int i;
float sum=0;
for(i=1;i<=n;i++)
{
sum+=factorial(i)/i;
}
return sum;
}
int factorial(int a)
{
int i,fact=1;
for(i=1;i<=a;i++)
fact*=i;
return fact;
}
int main()
{
printf("%f",sum_of_series(5));
return 0;
}




