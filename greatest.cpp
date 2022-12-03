#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the first number");
	scanf("%d",&a);
	printf("Enter the second number");
	scanf("%d",&b);
	printf("Enter the third number");
	scanf("%d",&c);
	if(a==b)
	{
		if(a>c)
		{
			printf("A and B is greater");
		}
		else
		{
			printf("your largest number is:%d",c);
		}
	}
	else if(b==c)
	{
		if(b>c)
		{
			printf("B and C is greater");
		}
		else
		{
			printf("your largest number is:%d",b);
		}
	}
	else if(c==a)
	{
		if(c>b)
		{
		 printf("C and A is greater");
	     }
	     else
	     {
	     	printf("your largest number is:%d",b);
		 }
	
	  
     }
	else if(a>b && a>c)
	{
		printf("your largest number is:%d",a);
	}
	else if(b>a && b>c)
	{
		printf("your largest number is:%d",b);
	}
	else if(c>a && c>b)
	{
		printf("your largest number is:%d",c);
	}
}
