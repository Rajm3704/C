//Array stores the elements in the contigous memory locations

#include <stdio.h>

int main(){
    int marks[5];
    printf("Enter the marks:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("The address value of marks at %d is %u\n", i, &marks[i]);
    }

    /*
    The address value of marks at 0 is 6422276
    The address value of marks at 1 is 6422280
    The address value of marks at 2 is 6422284
    The address value of marks at 3 is 6422288
    The address value of marks at 4 is 6422292 */
    return 0;
}