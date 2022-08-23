/*//1.Write a function to find the greatest number from the given array of any size.(TSRS).
#include<stdio.h>
int Greatest_Array(int A[],int size);
int main()
{
    int A[]={4,5,9,2,58,2,5,4,4,9},greatest=0;
    greatest=Greatest_Array(A,10);
    printf("greatest number is %d",greatest);
    return 0;
}
int Greatest_Array(int A[],int size)
{
 int i,inti=0;
 for(i=0;i<size;i++)
 {
     if(inti<A[i])
        inti=A[i];
}
     return inti;
}
//2.Write a function to find the smallest number from the given array of any size.(TSRS).
#include<stdio.h>
int smallest_Array(int A[],int size);
int main()
{
    int A[]={4,5,9,2,58,2,5,4,4,9},smallest=0;
    smallest=smallest_Array(A,10);
    printf("smallest number is %d",smallest);
    return 0;
}
int smallest_Array(int A[],int size)
{
 int i,inti=0;
 for(i=1;i<size;i++)
 {
     if(A[0]>A[i])
        inti=A[i];
}
     return inti;
}
//3.Write a function to sort an array of any size.(TSRS).
#include<stdio.h>
int * sort_Array(int Arr[],int size);
int main()
{
     int Arr[]={56,78,16,95,54,36,74,12,99,56},*ptr=NULL,i;
     ptr=sort_Array(Arr,10);
     for(i=0;i<10;i++)
     {
        if(Arr[i]!=Arr[i+1])
        printf("%d ",*(ptr+i));
     }
     return 0;
}
int * sort_Array(int Arr[],int size)
{
    int i,j,temp=0;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
            if(Arr[j]<Arr[i])
        {
                temp=Arr[i];
                Arr[i]=Arr[j];
                Arr[j]=temp;
        }
    }
    return (Arr);
}
//4.Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right.(For example, if array of size 5 is [32,29,40,12,70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40,12,70,32,29])

#include<stdio.h>
void Array_rotation(int Arr[],int size);
int main()
{
    int Arr[]={32,20,40,12,70};
    Array_rotation(Arr,5);
    return 0;
}
void Array_rotation(int Arr[],int size)
{
    int d=0,i,j;
    for(i=0;i<2;i++)
    {
        d=Arr[0];
        for(j=0;j<4;j++)
        {
            Arr[j]=Arr[j+1];
        }
             Arr[j]=d;
    }
    for(i=0;i<5;i++)
        printf("%d ",Arr[i]);
    return 0;

}
//5.Write a function to find the first occurrence of adjacent duplicate values  the array.
#include<stdio.h>
int occurrence(int A[],int size);
int main()
{
    int A[]={9,5,8,5,5,7,8,4,4,7};
    printf("first occurrence of adjacent duplicate value is %d",occurrence(A,10));
    return 0;
}
int occurrence(int A[],int size)
{
    int i,occur=0;
    for(i=0;i<size-1;i++)
      if(A[i]==A[i+1])
      {
          occur=A[i];
        return occur;
      }
}
//6.Write a function in c to read n number of values in an array and display it in reverse order.
#include<stdio.h>
void display_reverse(int A[10],int size)
{
    int i;
    for(i=9;i>=0;i--)
        printf("%d  ",A[i]);
}
int main()
{
    int A[10],i;
    printf("please enter the 10 numbers\n");
    for(i=0;i<10;i++)
    scanf("%d",&A[i]);
    display_reverse(A,10);
    return 0;
}
//6.Write a function in c to count a total number of duplicate elements in an arry.
#include<stdio.h>
void frequency(void);
int main()
{
frequency();
return 0;
}
void frequency(void)
{
int A[8]={1,2,3,7,8,3,2,4};
int fre[9]={0},i,count=0;
for(i=0;i<=8;i++)
{
fre[A[i]]++;
}
for(i=1;i<9;i++)
{
   if(fre[i]>1)
   count++;
}
printf("total number of duplicate element is %d",count);
}
//7.Write a function in c to print all unique elements in an array.
#include<stdio.h>
void frequency(void);
int main()
{
frequency();
return 0;
}
void frequency(void)
{
int A[8]={1,2,3,4,8,3,2,4};
int fre[9]={0},i;
for(i=0;i<=8;i++)
{
fre[A[i]]++;
}
for(i=1;i<9;i++)
{
   if(fre[i]==1)
   printf("%d \n",i);
}
}
//9.Write a function in c to merge two arrays of the same size sorted in descending order.
#include<stdio.h>
void merge_sort(void)
{
int Arr1[]={1,3,11,9,10},Arr2[]={15,18,31,30,12},Arr3[10]={0},i,j,k=0,temp=0;
for(i=0;i<10;i++)
{
if(i<=4)
{
Arr3[i]=Arr1[i];
}
else
{
Arr3[i]=Arr2[k];
k++;
}
}
for(i=0;i<9;i++)
{
for(j=i+1;j<10;j++)
{
if(Arr3[i]<Arr3[j])
{
temp=Arr3[i];
Arr3[i]=Arr3[j];
Arr3[j]=temp;
}
}
}
for(i=0;i<10;i++)
printf("%d ",Arr3[i]);
}
int main()
{
merge_sort();
return 0;
}

//10.Write a function in c to count the frequency of each element of an array
#include<stdio.h>//this code not better for zeros.
void frequency(void);
int main()
{
frequency();
return 0;
}
void frequency(void)
{
int A[8]={1,2,3,4,8,3,2,4};
int fre[9]={0},i;
for(i=0;i<=8;i++)
{
fre[A[i]]++;
}
for(i=1;i<9;i++)
{
   if(fre[i]!=0)
   printf("%d -->>%d \n",i,fre[i]);
}
}*/

