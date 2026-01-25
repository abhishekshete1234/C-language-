#include<stdio.h>
#include<conio.h>
void main()
{
  float r,ans;
  int ch;
  clrscr();
  printf("\npres 1 :area of circle");
  printf("\npress 2 :circumference of circle");
  printf("\npress 3 :volume of sphare");
  printf("\nenter radius");
  scanf("%f",&r);
  printf("\nenter choise");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
   {
     ans=3.14*r*r;
     printf("\narea of circle=%f",ans);
     break;
   }

   case 2:
   {
     ans=2*3.14*r;
     printf("\ncircumference=%f",ans);
     break;
   }

      case 3:
   {
      ans=4/3*3.14*r*r*r;
      printf("valume of sphare=%f",ans);
      break;
    }
  }
   getch();
}


