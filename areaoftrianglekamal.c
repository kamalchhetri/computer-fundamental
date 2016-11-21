   /*
   student name:kamal rokka chhetri
   subjext:programming fundamental
   date:11/12/2016
   roll no.
   program:w.a.p to find area of triangle
   lab no.
   */
   #include<stdio.h>
   //#include<math.h>
   //#include<conio.h>
        int main()
        {
        float area,a,b,c,s,e;
            printf("area of triangle\n");
            printf("enter value of side a\n");
            scanf("%f",&a);
            printf("enter value of side b\n");
            scanf("%f",&b);
            printf("enter value of c\n");
            scanf("%f",&c);
            s=(a+b+c)/2;
            printf("the value of s is: %f\n", s);
            e=s*(s-a)*(s-b)*(s-c);
            printf("the value of e is: %f\n", e);
            area=pow(e,0.5);
            //area=e*0.5;
            printf("AREA OF TRIANGLE is: %f", area);
                        return 0;
   }
