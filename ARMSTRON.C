#include<stdio.h>
#include<conio.h>
void main()
{
 int num,orignal,remin,result=0;
 clrscr();
 printf("enter number");
 scanf("%d",&num);
 orignal=num;
 while(num!=0)
 {
  remin = num%10;
  result=result+remin*remin*remin;
  num=num/10;
 }
 if(result==orignal)
 printf("armstrong number");
 else
  printf("not armstrong number");
  getch();
 }
