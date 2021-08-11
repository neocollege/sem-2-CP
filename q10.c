// WAP to display first n elements of Fibonacci series (using 'for') 
#include <stdio.h>

int main()
{
    int n,i,a=1,b=1,c;
    printf("Enter a number : \n");
    scanf("%d",&n);
    printf("1 1 ");
    for(i=1;i<=n-2;i++)
    {
        c = a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    
    return 0;
}
