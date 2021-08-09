// Write a menu driven program to perform add / subtract / multiply / divide based on the users choice. The user will indicate the operation to be performed using the signs i.e. + for addition, - for subtraction and so on
#include <stdio.h>

int main()
{
    int a,b,sum,diff,prod,divi;
    char c;
    printf("Enter the two numbers : \n");
    scanf("%d %d",&a,&b);
    printf("Enter the operation to be done : \n");
    scanf(" %c",&c);
    switch(c)
    {
        case '+': sum = a+b;
                  printf("The sum of the two numbers is : %d\n",sum);
                  break;
        case '-': diff = a-b;
                  printf("The difference of the two numbers is : %d\n",diff);
                  break;
        case '*': prod = a*b;
                  printf("The product of the two numbers is : %d\n",prod);
                  break;
        case '/': divi = a/b;
                  printf("On dividing the two numbers we get : %d\n",divi);
                  break;
        default : printf("Enter a valid character");
    }
    
    return 0;
}
