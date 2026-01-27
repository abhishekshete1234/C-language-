#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("enter number :");
  scanf("%d",&a);
  printf("enter number :");
  scanf("%d",&b);
  a>b ? printf("a is maximum=%d") : printf("b is maximum=%d");
  getch();
}
