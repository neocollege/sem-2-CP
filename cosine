//WAP to find the cosine of an angle
#include <stdio.h>

int main()
{
    int i=2, sign=-1;
    float num, term, sum=1, fact=2, x;
    printf("Enter the angle in degrees: \n");
    scanf("%f",&x);
    x=x*3.142/180; //to convert to radians
    num=x*x;
    do{
        term=num/fact;
        sum=sum+term*sign;
        num=num*x*x;
        i=i+2;
        fact=fact*(i-1)*i;
        sign=sign*(-1);
        
    }
    while(term>1e-6);
    printf("cos x = %f",sum);
    
    return 0;
}
