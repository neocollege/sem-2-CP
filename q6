// WAP to find the sum of seven terms using a for loop for the following series: 1/1!+2/2!+3/3!+………..+7/7! 
#include <stdio.h>

int main()
{
    float i,j,sum;
    float fact = 1.0;
    for(i=1;i<=7;i++)
    {
        for(j=i;j>=1;j--)
            fact = fact*j;
        sum = sum+(i/fact);
    }
    printf("The sum of the series is : %f",sum);
    
    return 0;
}
