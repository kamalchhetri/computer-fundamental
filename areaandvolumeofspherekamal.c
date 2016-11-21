/*
student name:kamal rokka chhetri
roll no.:
subject:
lab no.:
program:w.a.p to find area and volume of sphere
date:
*/
#include<stdio.h>
#include<math.h>
//#include<conio.h>
int main()
{
float r,area,volume;
printf("enter value r\n");
scanf("%f",&r);

area=4*3.14*r*r;
//area=4*3.14*pow(r,2);

volume=4/3*3.14*r*r*r;
//volume=4/3*3.14*pow(r,3);
printf("AREA OF SPHERE=%f\n",area);
printf("VOLUME OF SPHERE=%f\n",volume);

return 0;
}
