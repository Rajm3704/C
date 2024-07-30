#include <stdio.h>

int main(){
    char string[4] = "RAJ";
    for (int i = 0; i < 4; i++)
    {
        printf("character %d is %c\n", i, string[i]);
    }
    
    char S[12];
    scanf("%s", S);
    printf("%s", S);

    char str[40];
    gets(str); //likewise scanf it fetch the value from the user with multi characters.
    puts(str); //likewise printf it prints and move the cursor on the next line.
    return 0;
}