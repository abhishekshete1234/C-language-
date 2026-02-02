#include<stdio.h>
#include<conio.h>
void main()
{
  float f,c,k;
  clrscr();
  printf("enter number :");
  scanf("%f",&f);

  c=5.0/9*(f-32);
  k=c+273.15;

  printf("celsius=%f \nkelvin=%f",c,k);
  getch();


}