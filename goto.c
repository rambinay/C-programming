#include<stdio.h>
#include<conio.h>
void main()
{
	goto a;
	b:
		printf("gram");
	goto c;
	a:
		printf("C pro");
	goto b;
	c:
		printf("ming");
	getch();
}
