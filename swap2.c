#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter the values of a :");
    	scanf("%d",&a);
	printf("enter the values of b :");
		scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping the values of a is %d\n",a);
	printf("after swapping the values of b is %d ",b);
	
	getch();
}
