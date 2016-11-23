/*
student name:kamal rokka chhetri
subject:programming fundamental
program:w.a.p to find temperature in fahernhit into centigrate
roll no.
date:31,nov,2016
*/
#include<stdio.h>
//#include<conio.h>
int main()
{
float f,c;
printf("enter value of temperature in fahrenhit\n");
scanf("%f",&f);
c=0.55*(f-32);
//c=5/9(f-32);
printf("value of temperature into centigrate =%f",c);
return 0;

}
