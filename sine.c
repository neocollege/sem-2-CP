//WAP to find the sine of an angle
#include <stdio.h>

void main()
{
    int i=1, sign=1;
    float num, term, sum=0, fact=1, x;
    printf("Enter the angle in degrees: \n");
    scanf("%f",&x);
    x=x*3.14/180; //to convert to radians
    num=x;
    do{
        term=num/fact;
        sum=sum+term*sign;
        num=num*x*x;
        i=i+2;
        fact=fact*(i-1)*i;
        sign=sign*(-1);
        
    }
    while(term>1e-6);
    printf("sin x = %f",sum);
}
