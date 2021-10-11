#include<stdio.h>
#include<conio.h>

void main()
{
	int c,dl,cf,math,eg,total;
	float per;
	printf("Enter marks of nepali \n");
	scanf("%d",&c);
	printf("Enter marks of digital logic \n");
	scanf("%d",&dl);
	printf("Enter marks of computer fundamental \n");
	scanf("%d",&cf);
	printf("Enter marks of math\n");
	scanf("%d",&math);
	printf("Enter marks of english \n");
	scanf("%d",&eg);
	total=c+dl+cf+math+eg;
	per=(float)total/5;
	printf("The total obtained marks = %d \nPercent = %f",total,per);
	if(c>=40 && dl>=40 && cf>=40 && math>=40 && eg>=40)
	{
		if(per>=80)
		printf("\n Distinction");
		else if(per>=60)
		printf("\nFirst Division");
		else if(per>=45)
		printf("\nSecond Division");
		else 
		printf("\nThird Division");
	}
	else
	printf("\n You are failed.");
}
