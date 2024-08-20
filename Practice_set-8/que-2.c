//Write your own version of strlen function from <string.h>

#include <stdio.h>

int strlen(char array[]){
    int i=0;
    char c = array[i];
    while (c!='\0')
    {
        c = array[i];
        i++;
    }
    int count = i - 1;
    return count;
}

int main(){
    char str[20];
    printf("enter the string: ");
    scanf("%s", &str);
    printf("the length of entered string is %d\n", strlen(str));
    return 0;
}