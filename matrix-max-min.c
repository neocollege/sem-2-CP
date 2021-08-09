//WAP to find the largest and smallest element of a matrix

#include <stdio.h>

void main(){
    int m,n;
    printf("Enter the number of rows and columns of the matrix: \n");
    scanf("%d %d",&m,&n);
    int A[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the element: \n");
            scanf("%d",&A[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    int max,min;
    max=min=A[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(A[i][j]>max)
                max=A[i][j];
            if(A[i][j]<min)
                min=A[i][j];
        }
    }
    printf("The largest number is %d and the smallest number is %d.",max,min);
}
