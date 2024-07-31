#include <stdio.h>
#include <string.h>

int main(){
    char a[10] = "Hello, ";
    char b[10] = "World!";
    char c[12];
    // printf("%s\n", a);
    // printf("%s\n", b);
    printf("%d\n", strlen(a));//shows the length of the string.
    strcpy(c,a);//strcpy(target,source) copy strings.
    printf("%s\n", c);
    strcat(a,b);//concatenate two strings.
    printf("%s\n", a);
    strrev(a);
    printf("%s\n", a);//reverse the string raj=jar
    return 0;
}