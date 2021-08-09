//WAP to find if the matrix entered is symmetric, skew-symmetric or non-symmetric

#include <stdio.h>

void main() {
    int m,n;
    printf("Enter the dimensions of the matrix: \n");
    scanf("%d %d",&m,&n);
    int A[m][n],B[n][m];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            printf("Enter element: \n");
            scanf("%d",&A[i][j]);
        }
    }
    printf("The matrix entered is: \n");
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    if(m!=n)
        printf("The matrix is not symmetric");
    else {
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
                B[j][i]=A[i][j];
        }
        int flag;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    if(B[i][j]==A[i][j])
                        continue;
                    else{
                        flag=0;
                        break;
                    }
                }
                else{
                    if(B[i][j]==A[i][j])
                        flag=1;
                    else if(B[i][j]==-A[i][j])
                        flag=2;
                    else{
                        flag=0;
                        break;
                    }
                }
            }
            if(flag==0)
                break;
        }
        if(flag==0)
            printf("The matrix is not symmetric");
        else if(flag==1)
            printf("The matrix is symmetric");
        else if(flag==2)
            printf("The matrix is skew-symmetric");
    }
}