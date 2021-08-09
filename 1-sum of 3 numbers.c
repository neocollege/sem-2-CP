//WAP to read three floating point numbers from user as input and find addition

#include <stdio.h>
int main()
{
    float a,b,c,sum;
    printf("Enter three numbers : \n");
    scanf("%f,%f,%f",&a,&b,&c);
    sum = a+b+c;
    printf("The sum of the three numbers is : %f",sum);
    
    return 0;
    
}