//   Assignment 24
/*//1.define a function to check whether a given number is a prime number or not.
#include<iostream>
#include<math.h>
using namespace std;
int prime(int);
int main()
{
   int n;
   cout<<"please enter the number"<<endl;
   cin>>n;
   if(prime(n))
   cout<<"prime number";
   else
   cout<<"Number is not prime";
   return 0;
}
int prime(int n)
{
	int i=2;
	while(i<=sqrt(n))
	{
	     if(n%i==0)
	     return 0;
    }
	     return 1;
}


//2.Define a function to find the higest value digit in a given number.
#include<iostream>
using namespace std;
int higest_value_digit(int);
int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	cout<<"higest value digit is  "<<higest_value_digit(n);
	return 0;
}
int higest_value_digit(int n)
{
	int i,sum=0,r=0;
	while(n)
	{
		r=n%10;
		if(sum<r)   //find higest digit of given number
		sum=r;
		n/=10;
	}
	return sum;
}


//3.Define a function to calculate x raised to the power y.
#include<iostream>
#include<math.h>
using namespace std;
int x_raised_to_y(int,int);
int main()
{
	int a,b;
	cout<<"please the two number"<<endl;
	cin>>a>>b;
	cout<<a<<" raised to power "<<b<<" is "<<x_raised_to_y(a,b);
	return 0;
}
int x_raised_to_y(int a,int b)
{
   	int i=1,p=1;
	while(i<=b)
	{ 
	     p=p*a;
	     ++i;
	}
	return p;
	//return(pow(a,b));
}


//4.Define a function to print Pascal Traingle up to N lines.
#include<iostream>
using namespace std;
int factorial(int);
void combination(int);
int main()
{
	int n;
	cout<<"please enter the lines"<<endl;
	cin>>n;
	combination(n);
	return 0;
}
void combination(int n)
{
	int i,j,c=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
		cout<<" "<<factorial(i)/(factorial(j)*factorial(i-j)); //combination formula n!/r!(n-r).
    }
	   cout<<endl;
	}
}
int factorial(int n)
{
	int i,fact=1;
	if(n==0)
	return 1;
	else
	   for(i=n;i>1;i--)
	   {
	   	fact=fact*i;
	   }
	   return fact;
}



//5.Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
int fibo(int);
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	if(fibo(n))
	cout<<n<<" is present in this fibonacci series";
	else
	cout<<n<<" is NOT present in this fibonacci series";
	return 0;
}
int fibo(int n)
{
	int first=-1,second=1,third=0;
	while(1)
	{
		third=first+second;
		if(third>n)
		return 0;
		if(third==n)
		return 1;
		first=second;
		second=third;
	}
}


//6.Define a function to swap data of two int variables using call by reference.
#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int a=143,b=420;
	swap(a,b);
	cout<<"a is "<< a <<"  b is "<< b;
	return 0; 
}
void swap(int &x,int &y)
{
	x=x+y;
	y=x-y;;
	x=x-y;
}


//7.Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int,int,int=0);
int main()
{
	int a=40,b=70,c=80;
	cout<<add(40,70);
	cout<<endl<<add(40,60,20);
	return 0;
}
int add(int a,int b,int c)
{
	return(a+b+c);
}


//8.Define overloaded functions to calculate area  of circle,area of rectangle and area of triangle.
#include<iostream>
#define PI 3.14
#include<conio.h>
using namespace std;
void area(float);
void area(int,int);
void area(float,float);
int main()
{
    float base=0,height=0;
    int l=0,b=0;
    cout<<"enter the base and height for area of triangle"<<endl;
    cin>>base>>height;
    area(base,height);
    getch();
    cout<<"enter the length and breadth for area of rectangle"<<endl;
    cin>>l>>b;
    area(l,b);
    getch();
    float r=0;
    cout<<"enter the length and breadth for area of circle"<<endl ;
    cin>>r;
    area(r);
}
void area(float r)
{
    cout<<"Area of circle is "<<PI*r*r<<endl;
}
void area(int l, int b)
{
    cout<<"Area of rectangle is "<<l*b<<endl;
}
void area(float b,float h)
{
    cout<<"Area of triangle is "<<(b*h)/2<<endl;
}


//9.Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include<iostream>
using namespace std;
int maximum(int,int);
int maximum(float,float);
int main()
{
  float a=409.50,b=56.7;
  int x=120,y=34;
  cout<<"interger " <<maximum(x,y)<<endl;
  cout<<"real "<<maximum(a,b);
  return 0;
}
int maximum(int x,int y)
{
  return(x>y?x:y);
}
int maximum(float a,float b)
{
return(a>b?a:b);
}


//10.Write functions using function overloading to add two numbers having different data type.
#include<iostream>
using namespace std;
int add(int,int);
float add(float,float);
int main()
{
   float a=80,b=780;
   int  c=65,d=67;
   cout<<add(a,b)<<endl;;
   cout<<add(c,d);
   return 0;
}
float add(float c,float d)
{

    return(c+d);
}
int add(int a,int b)
{
    return(a+b);
}*/


