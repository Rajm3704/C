#include <stdio.h>

int main(){
    int marks[5];

    printf("Enter the marks\n");
    /*
    scanf("%d", &marks[0]);
    scanf("%d", &marks[1]);
    scanf("%d", &marks[2]);
    scanf("%d", &marks[3]);
    scanf("%d", &marks[4]);

    printf("The marks are %d, %d, %d, %d, %d\n", marks[0], marks[1], marks[2], marks[3], marks[4]);  */
    
    for (int i = 0; i < 5; i++)  //for entering values
    {
        scanf("%d", &marks[i]);
    }
    
    for (int i = 0; i < 5; i++) //for printing the values
    {
        printf("The value of marks %d is %d\n", i, marks[i]);
    }
    
    return 0;
}