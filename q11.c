// WAP to find nCr using function
#include <stdio.h>

int factorial(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
        fact = fact*i;
    return fact;
}
    
void main()
{
    int n,r,c;
    printf("Enter n and r \n");
    scanf("%d %d",&n,&r);
    c = factorial(n)/(factorial(n-r)*factorial(r));
    printf("nCr = %d",c);
}
