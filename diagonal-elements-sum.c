#include <stdio.h>

void main() {
    int i,j,m,n,sum=0;
    printf("Enter the number of row and columns: \n");
    scanf("%d,%d",&m,&n);
    int A[m][n];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            printf("Enter value: \n");
            scanf("%d",&A[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
            printf("%d\t",A[i][j]);
            if(i==j)
                sum=sum+A[i][j];
            else if((i+j)==(n-1) && (i!=j))
                sum=sum+A[i][j];
        printf("\n");
    }
    printf("The sum of diagonal elements is: %d",sum);
}