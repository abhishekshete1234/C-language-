#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   clrscr();
   printf("enter number :");
   scanf("%d",&a);
   printf("enter number :");
   scanf("%d",&b);
   printf("enter number :");
   scanf("%d",&c);
   if (a>b && a>c)
   {
     printf("a is maximum");
   }
   else if(b>a && b>c)
   {
    printf("b is maximum");
   }
   else
   {
     printf("c is maximum");
   }
   getch();
}
