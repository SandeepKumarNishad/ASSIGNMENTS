/*//1.write a c++ program to print Hello MySirG on the screen.
#include<iostream>
using namespace std;
int main()
{
	cout<<"Hello MySirG";
	return 0;
}
//2.Write a c++ program to print Hello on the first line and MySirG on the second line.
#include<iostream>
using namespace std;
int main()
{
	cout<<"Hello"<<endl<<"MySirG";
	return 0;
}
//3.write a c++ program to calculate the sum of two numbers.
#include<iostream>
using namespace std;
int main()
{
	int a=420,b=786;
	cout<<"sum "<<a+b;
	return 0;
}
//4.Write a c++ program to calculte the area of circle.
#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
	float radius;
	cout<<"enter the radius of circle"<<endl;
	cin>>radius;
	cout<<"area of circle "<<PI*radius*radius;
	return 0;
}
//5.Write a c++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
float length=0,height=0,breadth=0;
cout<<"please enter the length breadth and height of a cuboid"<<endl;
cin>>length>>breadth>>height;
cout<<"volume of a cuboid "<<length*breadth*height;
return 0;
}
//6.Write a program to calculate an average of 3 number.
#include<iostream>
using namespace std;
int main()
{
    float n1=0.0,n2=0.0,n3=0.0;
    cout<<"please enter the three number"<<endl;
	cin>>n1>>n2>>n3;
	cout<<"Average of three number "<<(n1+n2+n3)/3;
	return 0;
}
//7.Write a c++ program to calculate the square of a number.
#include<iostream>
using namespace std;
int main()
{
	int x=9;
	cout<<"square is "<<x*x;
	return 0;
}
//8.Write a c++ program to swap value of two int variable without using third variable.
#include<iostream>
using namespace std;
int main()
{ 
    int first=420,second=143;
    first=first+second;
    second=first-second;
    first=first-second;
	cout<<"first->"<<first<<"  second->"<<second;
	return 0;
}
//9.Write a c++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
	int first=10,second=35;
	if(first>second)
	cout<<"maxium is "<<first;
	else
	 cout<<"maxium is "<<second;
	 return 0;
}
//10.Write a c++ program to add all the numbers of an array of size 10
#include<iostream>
using namespace std;
int main()
{
	int Array[10]={1,2,3,4,3,6,7,4,5,3},i,sum=0;
	for(i=0;i<10;i++)
	 sum=sum+Array[i];
	cout<<"sum of array is "<<sum;
	return 0;
}*/
