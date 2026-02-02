#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("enter number : ");
 scanf("%d%d%d",&a,&b,&c);

 if(a>=b && a>=c)
 {
   printf("max number=%d",a);
 }
 else if(b>=a && b>=c)
 {
   printf("max number=%d",b);
 }
 else
 {
   printf("max number =%d",c);
 }
  getch();
}