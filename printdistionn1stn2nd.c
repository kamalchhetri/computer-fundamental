/*name rohan pradhan
subject programming fundamentals
date:3rd nov
program: print ditision 1st nd 2nd division
lab:11*/
#include<stdio.h>
int main()
{
	float e,s,c,p,l,d,a,total,average,percentage;
	printf("enter marks on english\n");
	scanf("%f",&e);
	printf("enter marks of software enginnering\n");
	scanf("%f",&s);
	printf("enter marks of computer articture\n");
	scanf("%f",&c);
	printf("enter marks of programing fundamental\n");
	scanf("%f",&p);
	printf("enter marks of lab\n");
	scanf("%f",&l);
	printf("enter marks of discrete math\n");
	scanf("%f",&d);
	printf("enter marks of algebra\n");
	scanf("%f",&a);
	total=e+s+c+p+l+d+a;
	printf("total marks:%f\n",total);
	average=total/7;
	printf("total average marks:%f\n",average);
	percentage=total/7;
    printf("total percentage:%f\n",percentage);
	
	if(percentage>=80)
	{
		printf("you hab got distion:");
		
		} 
		
		else if (percentage>=60 && percentage<80)
		{
		printf("you hab got 1st division:");
			}
		else if (percentage>=50 && percentage<60);
		{
		printf("you hab got 2nd division:");
			}
			
			return 0;
	}
