#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,q,r;
  clrscr();
  printf("enter number :");
  scanf("%d%d",&a,&b);

  q=a/b;
  r=a%b;
  printf("quotient=%d\n",q);
  printf("remainder=%d",r);
  getch();
}
