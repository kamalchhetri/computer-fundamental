/*name:kamal rokka chhetri
subject programming fundamentals
date:
program: print largest no. among three no. using if elsif and else
lab:11*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value of a \n");
	scanf("%d",&a);
	printf("enter value of b \n");
	scanf("%d",&b);
	printf("enter value of c \n");
	scanf("%d",&c);
	if(a>=b && a>=c)
	{
	printf("largest no.%d",a);
	}
	else if(b>=a && b>=c)
	{
	printf("largest no.%d",b);
	}
	else
	{
	printf("largest no.%d",c);
	}
	return 0;
	
}
