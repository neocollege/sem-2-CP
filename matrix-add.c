#include <stdio.h>

void main() {
    int i,j,m,n;
    printf("Enter the number of rows and columns: \n");
    scanf("%d,%d"&m,&n);
    int A[m][n], B[m][n], C[m][n];

    printf("Entre the elements of the first matrix: \n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            printf("Enter value: \n");
            scanf("%d",A[i][j]);
        }
    }
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            printf("Enter value: \n");
            scanf("%d",B[i][j]);
        }
    }
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
            C[i][j]=A[i][j]+B[i][j];
    }
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
            printf("%d\t",C[i][j]);
        printf("\n");
    }
}