//1.wap to find the number  of vowels in each of the 5 strings stored in two dimensional arrays. Taken from the user.
#include<stdio.h>
int main()
{
    int i,j,count=0;
    char str[5][20]={0};
    printf("enter the strings\n");
    for(i=0;i<5;i++)
    {
        gets(str[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=0;str[i][j]!='\0';j++)
        {
            if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u'||str[i][j]=='A'||str[i][j]=='E'||str[i][j]=='I'||str[i][j]=='O'||str[i][j]=='U')
                count++;
        }
        printf("%s  %d ",str[i],count);
        count=0;
    }
    return 0;
}
//2.wap to sort 10 city names stored in two dimensional arrays,taken form the user.


#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0;
    char str[10][20],ch[20];
    printf("enter the strings\n");
    for(i=0;i<10;i++)
    {
       gets(str[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(ch,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],ch);
            }
        }
    }
    printf("sorted string is:");
    printf("--------------------------------------------------------\n");
    for(i=0;i<10;i++)
    printf("%s\n",str[i]);
    return 0;
}
//3.wap to read and display a 2d array of strings in c language

#include<stdio.h>
int main()
{
    int i;
    char p[5][30];
    printf("enter the 5 strings");
    for(i=0;i<5;i++)
    {
        scanf("%s",p[i]);
    }

    for(i=0;i<5;i++)
    {
    printf(" %s ",p[i]);
    }
    return 0;
}
//4.wap to search a string in the list of strings.

#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0;;
    char str[10][20]={"Sandeep","Ganga","Madhuri","Avinash","kuldeep","Vinay","Shalina","vk","vinita","jyotiGupta"},ch[20];
    printf("Enter the string\n");
    gets(ch);
    for(i=0;i<10;i++)
    {
        if(strcmp(str[i],ch)==0)
        {
            printf("given string is presented\n");
            printf("index no is %d  and string is %s ",i,str[i]);
            flag=1;
        }
    }
    if(flag==0)
        printf("String is not present in this list");
    return 0;

}
//6.wap to print the strings which are palindrome inthe list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,l=0,j=0,flag=0;
    char str[5][20]={"sandeep","kumar","nitin","santosh","madam"};
    for(i=0;i<5;i++)
    {
        l=strlen(str[i]);
        l=l-1;
        j=0;
        flag=0;
        while(j<l)
        {
            if(str[i][j]!=str[i][l])
            {
                flag=1;
                break;
            }
            j++;
            --l;
        }
        if(flag==0)
        printf("  %s  ",str[i]);
    }
    return 0;
}
//7. From the list of IP addresses,check  whether all IP addresses are valid.
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char ip[]="23.134.122.12";
    char *a=strtok(ip,".");
    while(a!=NULL)
    {
        int x=atoi(a);
        if((x>=0)&&(x<=255))
           count++;
           a=strtok(NULL,".");
    }
    if(count==4)
        printf("ip address is valid");
    else
        printf("ip address is not valid");
    return 0;
}*/

//5.Suppose we have a list of email addresses, check whether all email addresses have @ in it. Print all email out.

#include<stdio.h>
int main()
{
    int i,j,flag=0;
    char str[10][20];
    printf("enter the email address\n");
    for(i=0;i<10;i++)
    {
        scanf("%s",str[i]);
    }
    for(i=0;i<10;i++)
    {
        flag=0;
        for(j=0;str[i][j]!='\0';j++)
        {
            if(str[i][j]=='@')
            printf("  %s  ",str[i]);
        }
}
return 0;
}

/*8.Given the list of words followed by two words,the task is to find the minimum distance etween the given two words in the list of words.
( Example s={"the","quick","brown","fox","quick"}
 word1="the",word2="fox",OUTPUT 2;*/
  #include<stdio.h>
  #include<math.h>
  #include<string.h>
  int main()
  {
      int i=0,s1=0,s2=0,min=0,flag=0;
      char str[5][20]={"sandeep","sanjay","kumar","nishad","class"};
      char w1[]="sanjay";
      char w2[]="class";
      for(i=0;i<5;i++)
      {
          if(strcmp(str[i],w1)==0)
            s1=i;
          if(strcmp(str[i],w2)==0)
          {
             s2=i;
             flag=1;
          }

      }
      if(flag==0)
        printf("minimum distance can't found");
      else
      {
          min=abs(s1-s2);
          printf("Minimum distance is %d ",min-1);
      }
  }
//9. write a program that asks the user to enter a username. if the username entered is one of the names in the list then the user is allowed to 
//calculate the factorial of a number. Otherwise ,an error message is displayed.


  #include<stdio.h>
  #include<string.h>
  void factorial(int);
  int main()
  {
      int i=0,flag=0;
      char str[4][20]={"Avinsh","verma","kuldeep","giri"};
      char searh[]="kldeep";
      for(i=0;i<4;i++)
      {
          if(strcmp(str[i],searh)==0)
          {
          factorial(5);
          flag=1;
          }
      }
      if(flag==0)
        printf("Invalid search");
      return 0;
  }
void factorial(int l)
{
    int i=1,fact=1;
    for(i=1;i<=l;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
//10.Create an authentication system.it should be menu driven



#include<stdio.h>
#include<string.h>
int main()
{
    char str[3][2][20]={{"sandeep","955916"},
                          {"vinay","9721"},
                          {"Roshan","8940"}
                        };

   char username[]="Rohan";
   char password[]="8940";
   int i=0,flag=0;
   for(i=0;i<3;i++)
   {
       if(strcmp(username,str[i][0])==0 && strcmp(password,str[i][1])==0)
       {
           printf("login successful");
           flag=1;
       }
   }
   if(flag==0)
    printf("username or password is invalid");
   return 0;
}




