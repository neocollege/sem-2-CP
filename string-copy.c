//copy a string

#include <stdio.h>
#include <string.h>

void main() {
    char s[100],s1[100];
    int x;
    printf("Enter a string: \n");
    gets(s);
    strcpy(s1,s);
    puts(s1);
}