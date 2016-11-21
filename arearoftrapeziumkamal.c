  /*
   student name:kamal rokka chhetri
   subjext:programming fundamental
   date:11/12/2016
   roll no.
   program:w.a.p to find area of trapezium
   lab no.
   */
   #include<stdio.h>
   //#include<conio.h>
        int main()
        {
        float area,a,b,h;
            printf("area of trapezium \n");
            printf("enter value of side a\n");
            scanf("%f",&a);
            printf("enter value of side b\n");
            scanf("%f",&b);
            printf("enter value of side h\n");
            scanf("%f",&h);
            area=0.5*(a+b)*h;
            printf("AREA OF TRAPEZIUM IS = %f",area);
                return 0;
        }
