#include<stdio.h>
#include<conio.h>
void main()
{
 float m1,m2,m3,m4,m5,m6,total,per;
 clrscr();
 printf("\nenter marks :");
 scanf("%f",&m1);
 printf("\nenter marks :");
 scanf("%f",&m2);
 printf("\nenter marks :");
 scanf("%f",&m3);
 printf("\nenter marks :");
 scanf("%f",&m4);
 printf("\nenter marks :");
 scanf("%f",&m5);
 printf("\nenter marks :");
 scanf("%f",&m6);

 total=m1+m2+m3+m4+m5+m6;
 per=total/6;

 printf("\ntotal=%f",total);
 printf("\nper=%f",per);

 if(per>=90)
   {
     printf("\nA GRADE");
   }
   else if(per>=75)
   {
     printf("\ngrade");
   }
   else if(per>=60)
   {
     printf("\nC grade");
   }
   else if(per>=50)
   {
     printf("\nD grade");
   }
   else if(per>=40)
   {
     printf("\nE grade");
   }
   else
   {
     printf("\nfail");
   }
  getch();
}

