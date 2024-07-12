//Write a program to determine whether a character entered by the user is lowercase or not.
//97 to 122

#include <stdio.h>

int main(){
    char a;
    printf("Enter the character\n");
    scanf("%c", &a);

    if (97<=a && a<=122){
        printf("The character %c is Lowercased\n", a);
    }
    else{
        printf("The character %c is Not Lowercased\n", a);
    }
    
    return 0;
}