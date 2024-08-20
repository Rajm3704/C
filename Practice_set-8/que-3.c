//Write your own version of strcpy function from <string.h>

#include <stdio.h>

int strcpy(char array1[5], char array2[5]){
    array2[5] = array1[5];
    return 0;
}

int main(){
    char str1[5] = "raj";
    char str2[5];
    strcpy(str1, str2);
    printf("%s\n", str2);
    return 0;
}