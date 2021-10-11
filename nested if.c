#include<stdio.h>
#include<conio.h>

void main()
{
	int eng,nep,comp,eco,total;
	float per;
	printf("\n Enter marks of Enlish");
	scanf("%d",&eng);
	printf("\n Enter marks of Nepali");
	scanf("%d",&nep);
	printf("\n Enter marks of Computer");
	scanf("%d",&comp);
	printf("\n Enter marks of Economics");
	scanf("%d",&eco);
	total=eng+nep+comp+eco;
	per=(float)total/4;
	printf("\nThe Obtained Marks=%d \nPercent=%f",total,per);
	if(eng>=35 && nep>=35 && comp>=35 && eco>=35)
	{
		if(per>=75)
		printf("\nDistinction");
		else if(per>=60)
		printf("\nFirst Division");
		else if(per>=45)
		printf("\nSecond Division");
		else
		printf("\nThird Division");
	}
	else
	printf("\nYou are failed. So division can't be awarded.");
	
	getch();
}
