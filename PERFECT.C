#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,sum=0;
 clrscr();
 printf("enter number:");
 scanf("%d",&n);
 for(i=1;i<n;i++)
 {
  if(n%i==0)
  {
   sum=sum+i;
  }
 }
 if(sum==n)
  printf("number is perfect=%d",sum);
 else
  printf("number is not perfect=%d",sum);
  getch();
 }
