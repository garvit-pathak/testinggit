// do while	Find A Generic Root Of Number 
#include <stdio.h>
 
int main()
{
  int Number, Sum=0, Reminder;
 
  printf("\n Please Enter any number\n");
  scanf("%d", &Number);
 
  do
  {
    for (Sum=0; Number > 0; Number= Number/10)
    {
      Reminder = Number % 10;
      Sum=Sum + Reminder;  
    }
    if(Sum >= 10)
    {
      Number = Sum;
    }
    else
    {
      printf("\n The Generic Root of a Given Number = %d", Sum);
      return 0;
    }
  }while(Number >= 10); 
}