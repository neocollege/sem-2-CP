//WAP to find the transpose of a square matrix
#include <stdio.h>

void main() {
    int i,j,m,temp;
    printf("Enter number of rows :\n");
    scanf("%d",&m);
    int A[m][m];
    printf("Enter the elements of the matrix: \n");
    for(i=0;i<m;i++) {
        for(j=0;j<m;j++) {
            printf("Enter elemnt: \n");
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("The matrix is: \n");
    for(i=0;i<m;i++) {
        for(j=0;j<m;j++)
            printf("%d\t",A[i][j]);
        printf("\n");
    }
    for(i=0;i<m;i++) {
        for(j=i+1;j<m;j++) {
            temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }
    printf("The transpose of the matrix is: \n");
    for(i=0;i<m;i++) {
        for(j=0;j<m;j++) {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
}