// WAP to calculate roots of a quadratic equation

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,d;
    printf("Enter the constants of the equation : \n");
    scanf("%f,%f,%f",&a,&b,&c);
    d = ((b*b)-(4*a*c));
    if (d == 0)
    {
        printf("The roots are real and equal \n");
        float r;
        r = (-b)/(2*a);
        printf("The root of the equation is : %f",r);
    }
    else if (d>0)
    {
        printf("The roots of the equation are real and distinct");
        float r1,r2;
        r1 = ((-b)+sqrt(d))/(2*a);
        r2 = ((-b)-sqrt(d))/(2*a);
        printf("The roots of the equation are : \n");
        printf("R1 = %f\n",r1);
        printf("R2 = %f",r2);
    }
    else
    {
        printf("The roots are of the equation are complex and distinct");
        float real,img;
        real = (-b)/(2*a);
        img = (sqrt(-1*d))/(2*a);
        printf("The roots of the equation are : \n");
        printf("R1 = %f + %fi\n",real,img);
        printf("R2 = %f - %fi",real,img);
    }
    
    return 0;
}
