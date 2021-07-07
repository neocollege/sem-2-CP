// WAP to find nCr using function
#include <stdio.h>

int main()
{
    int n,r,c;
    printf("Enter n and r \n");
    scanf("%d %d",&n,&r);
    int factorial(int x)
    {
        int fact=1;
        for(int i=1;i<=x;i++)
            fact = fact*i;
        return fact;
    }
    c = factorial(n)/(factorial(n-r)*factorial(r));
    printf("nCr = %d",c);
    
    return 0;
}
