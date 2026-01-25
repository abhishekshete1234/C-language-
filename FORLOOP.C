#include<stdio.h>
#include<conio.h>
void main()
{
  int x,y,i,ans=1;
  clrscr();
  printf("enter number:");
  scanf("%d",&x);
  printf("enter number:");
  scanf("%d",&y);
  for(i=1;i<=y;i++)
  {
   ans=ans*x;
  }
   printf("x raise y=%d",ans);

  getch();

}
