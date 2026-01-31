#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i,sum=0;
	printf("enter range :");
	scanf("%d",&a);
	printf("enter range :");
	scanf("%d",&b);
	
	for( i=a; i<=b; i++)
	{
		sum=sum+i;
		
	}
	printf("sum of all number=%d",sum);

	
}
