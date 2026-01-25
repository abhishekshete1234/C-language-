#include<stdio.h>
void main()
{
	char ch;
	printf("enter charcter :");
	scanf("%c",&ch);
	
	if(ch>=48 && ch<=58)
	{
		printf("number is digit");
	}
	else if(ch>=97 && ch<=122)
	{
		printf("lowercase");
		
	}
	else if(ch>=65 && ch<=90)
	{
		printf("uappercase");
		
	}
	else
	{
		printf("it is symbol");
	}
	
	
	
}
