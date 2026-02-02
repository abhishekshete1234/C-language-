#include<stdio.h>
#include<conio.h>
void main()
{
  int num;
  clrscr();
  printf("enter number :");
  scanf("%d",&num);

  if(num & 1)
  {
   printf("Isb is not set=%d\n",num);
  }
  else
  {
   printf("Isb is set=%d\n",num);
  }
  getch();
}