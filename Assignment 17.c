/*//1.Write a program to calculate the length of the string.(without using built-in method).
#include<stdio.h>
int main()
{
	char str[25];
	int i;
	printf("please enter the string\n");
	gets(str);
	for(i=0;str[i];i++);
	printf("Length of the string is %d",i);
	return 0;
}
//2.Write a program to count the ocurrence of a given character in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[24],i,c=0;
	int count=0;
	printf("please enter the string\n");
	fgets(str,24,stdin);
	printf("Enter the character\n");
	scanf("%c",c);
	for(i=0;str[i];i++)
		{
			if(str[i]==c)
			  count++;
 	  }
	   printf(" occurrence of a given character in a given string is %d",count);
}
//3.write a program to count vowels in a given strings.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[50],ch=0;
	int i,count=0;
	printf("enter the strings\n");
	fgets(str,50,stdin);
	for(i=0;str[i];i++)
	{
		ch=toupper(str[i]);
		if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
			count++;
		}
	}
	printf("total vowel is %d",count);
	return 0;
}
//4.Write a program to convert a given string into uppercase.
//method 1
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i;
	printf("please enter the string in lower case\n");
	gets(str);
	for(i=0;str[i];i++)
	{ 
	   str[i]=str[i]-32;
	   printf("%c ",str[i]);
	}
	return 0;
}
//method 2.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[20];
	int i;
	printf("please enter the string in lower case\n");
	fgets(str,20,stdin);
	for(i=0;str[i];i++)
	{
		printf("%c",toupper(str[i]));
	}
	return 0;
}
//5.Write a program to convert a given string into lowercase.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i;
	printf("please enter the string in upper case\n");
	gets(str);
	for(i=0;str[i];i++)
	{
	   str[i]=str[i]+32;
	}
	for(i=0;str[i];i++)
	{ 
	   if(str[i]!='@')
	     printf("%c",str[i]);
	}
}
//6.Write a program reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
	int l=0,i=0;
	char str[20],temp;
	printf("enter the string\n");
	gets(str);
	l=strlen(str);
	l=l-1;
	while(i<l)
	{
		temp=str[i];
		str[i]=str[l];
		str[l]=temp;
		i++;
		l--;
	}
	printf("%s",str);
	return 0;

}
//7.Write a program in c to count the total number of alphabets,digits and special characters in a string.
#include<stdio.h>
int main()
{
	char s[25];
	int i=0,alph=0,digit=0,special=-1;
	printf("enter the string\n");
	fgets(s,25,stdin);
	while(s[i])
	{
		if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')
		alph++;
	    else if(s[i]>='0'&&s[i]<='9')
		digit++;
		else
		{
	 special++;
        }
		   ++i;
	}

	printf("total number of alphabets is %d \n digit is %d \n and special character %d",alph,digit,special);
	return 0;
}

//8.Write a program in c to copy one string to another string.
#include<string.h>
#include<stdio.h>
int main()
{
	char str1[23]="sandeep";
	char str2[23]="vishal";
	printf("before copy of string\n");
	printf("%s %s ",str1,str2);
	strcpy(str1,str2);
	printf("\nafter copy of string \n");
	printf("%s %s ",str1,str2);
	return 0;
}
//9.Write a c program to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char str[][10]={"y","e","k","a","p"},temp[10]={0};
	for(i=0;i<=3;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(strcmp(str[j],str[i])<0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	for(i=0;i<5;i++)
	printf("%s ",str[i]);
	return 0;

}

//10.Write a program in c to find the frequency of character.
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char V[8]={'a','e','i','o','u','u','a','e'},freq[150]={0};
	for(i=0;i<8;i++)
	{
		freq[V[i]]++;
	}
	for(i=0;i<150;i++)
	{
		if(freq[i]!=0){
		
		printf("%c --->>%d",i,freq[i]);
		printf("\n");
	}
	}
	return 0;
}*/
