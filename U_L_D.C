#include<stdio.h>
#include<conio.h>
void main()
{
  int ch;
  char a;
  clrscr();
  printf("enter number:");
  scanf("%d",&ch);
  if(ch>=48 && ch<=57)
  {
   printf("character is a digit=%d",ch);
  }
  else if(ch>=65 && ch<90)
  {
   printf("charater is a uappercase=%d\n%c",ch);
  }
  else if(ch>=97 && ch<=122)
  {
   printf("character is lovercase=%d\n%c",ch);

  }
  else
  {
   printf("symbol");
  }
 getch();
}

