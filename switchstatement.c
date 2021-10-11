#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ch,c;
	printf("\n Enter two number");
	scanf("%d %d",&a,&b);
	printf("\n 1 for Sum");
	printf("\n 2 for difference");
	printf("\n 3 for product");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			c=a+b;
			printf("\n Sum of two numbers = %d",c);
			break;
		case 2:
			c=a-b;
			printf("\n Difference of two numbers = %d",c);
 			break;
		case 3:	
			c=a*b;
			printf("\n Product of two numbers = %d",c);
			break;
		default:
			printf("\n Enter value in range 1-3");	
	}
	getch();
}
