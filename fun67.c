//	Find A Grade Of Given Marks or (Find a Grade of Given Marks Using Switch Case)
#include<stdio.h>
void main()
{
   int s1,s2,s3,s4,s5,total;
   int percentage=0 ;
   printf("Enter marks of five subjects \n");
   scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
   total = s1 + s2 + s3 + s4+ s5 ;
   percentage = total / 5;
   switch(percentage)
   {
    case 80:
       printf("percentage %d 80>= than A grade",percentage);
       break;
    case 60:
        printf("percentage %d 60>= than B grade",percentage);
        break;
    case 40:   
        printf("percentage %d 40>= than C grade",percentage);
       break;
    case 20:   
       printf("percentage %d 30>= than D grade",percentage);
       break;
   
   default:
     printf("FAIL");
       break;
   }
}