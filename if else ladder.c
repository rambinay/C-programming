#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	printf("enter any three number \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	printf(" %d is the largest number. ",a);
	else if(b>c)
	printf(" %d is the largest number. ",b);
	else 
	printf(" % is the largest number. ",c);
	
	getch();	
}
