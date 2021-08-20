//WAP to accept a set of 10 numbers and print the numbers using pointers
#include <stdio.h>

void main(){
    int A[10],*p;
    printf("Enter 10 numbers:\n");
    for(int i=0;i<10;i++)
        scanf("%d",&A[i]);
    p=A;
    printf("Displaying the elements using pointer:\n");
    for(int i=0;i<10;i++)
        printf("%d ",*(p+i));
}