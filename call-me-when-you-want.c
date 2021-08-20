//call-by-value and call-by-reference
#include <stdio.h>

void call_by_value(int x, int y){
    int temp=x;
    x=y;
    y=temp;
}

void call_by_reference(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void main(){
    int a=10,b=20;
    printf("Initial value of a: %d\n",a);
    printf("Initial value of b: %d\n",b);
    call_by_value(a,b);
    printf("\nSwapping by call-by-value\n");
    printf("Value of a: %d\n",a);
    printf("Value of b: %d\n",b);
    a=10;
    b=20;
    call_by_reference(&a,&b);
    printf("\nSwapping by call-by-reference\n");
    printf("Value of a: %d\n",a);
    printf("Value of b: %d\n",b);
}