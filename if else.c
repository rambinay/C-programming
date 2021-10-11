#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	printf("enter your age\n");
	scanf("%d",&a);
	if(a>=60)
	printf("Your age is expired\n");
	else if(a>=40)
	printf("Your age is middle age\n");
	else if(a>=25)
	printf("You are youth \n");
	else if(a>=15)
	printf("You are young \n");
	else
	printf("You are child \m");   
	   
	getch();
}
