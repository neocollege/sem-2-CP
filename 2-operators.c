//WAP to demonstrate arithmetic operators: to read two integer numbers from the user and display the sum, difference, product, division and remainder

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two integers : \n");
    scanf("%d,%d",&a,&b);
    int sum = a+b;
    int diff = a-b;
    int prod = a*b;
    float div = a/b;
    int rem = a%b;
    printf("Sum of the two numbers is : %d \n",sum,);
    printf("Difference of the two numbers is : %d \n",diff,);
    printf("Product of the two numbers is : %d \n",prod,);
    printf("Dividing the two number we get : %f \n",div,);
    pruntf("Remainder after division of the two numbers is : %d \n",rem,);

    return 0;
}