// WAP to check if the entered number is Armstrong or not
#include <stdio.h>

int main()
{
    int n,b,a,sum=0;
    printf("enter a number to check whether it is a armstrong number or not \n");
     scanf("%d",&n);
    b=n;
    while(n!=0)
{
    a=n%10;
    sum=sum+ a*a*a;
    n=n/10;
}
if(b==sum)
printf("the number %d is a armstrong number\n",b);
else
printf("the number %d is  not a armstrong number\n",b);
    return 0;
}
