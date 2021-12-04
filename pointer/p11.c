//11.	Find the length of the string using pointers
#include<stdio.h>
int main()
{
 char s[100];
 char *p=s;
 int count=0;	
 printf("Enter the string:\n");
 gets(s);	
 while(*p!=NULL)
   {
     count++;
     p++;
   }	
   printf("Length of string= %d",count);
 return 0;
}
