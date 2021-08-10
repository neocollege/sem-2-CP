//palindrome

#include <stdio.h>
#include <string.h>

void palindrome(char s[]){
    int n = strlen(s);
    int c=0,i;
    for(i=0;i<n/2;i++){
        if(s[i]==s[n-i-1])
            c++;
    }
    if(c==i)
        printf("The string is a palindrome");
    else
        printf("The string is not a palindrome");
}

void main(){
    char s[1000];
    printf("Enter a string: \n");
    gets(s);
    palindrome(s);
}