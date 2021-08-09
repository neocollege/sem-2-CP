// WAP  (using 'for' loop) to display the following asking the user for the number of lines.
//    A
//   ABA
//  ABCBA
// ABCDCBA
//ABCDEDCBA 
#include <stdio.h>

int main()
{
    int n,i,j,k,m;
    int ch = 65;
    printf("Enter the number of lines : \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
            printf(" ");
        for(k=1;k<=i;k++)
        {
            printf("%c",ch);
            ch++;
        }
        ch=ch-2;
        for(m=1;m<i;m++)
        {
            printf("%c",ch);
            ch--;
        }
        printf("\n");
        ch = 65;
    }
    
    
    return 0;
}
