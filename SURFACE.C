#include<stdio.h>
#include<conio.h>
void main()
{
  float a,b,s,v;
  clrscr();
  printf("enter to number");
  scanf("%f%f",&a,&b);

  s=2*3.14*a*(b+a);
  v=3.14*a*a*a*b;

  printf("surface are=%f \nvolume=%f",s,v);
  getch();


}