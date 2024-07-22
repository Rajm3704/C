//Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.

#include <stdio.h>

int main(){
    int array[3][10];

    for (int i = 0; i < 11; i++)
    {
        for (int i = 0; i < 10; i++)
        {
            array[0][i] = 2 * (i+1);
        }
        for (int i = 0; i < 10; i++)
        {
            array[1][i] = 5 * (i+1);
        }
        for (int i = 0; i < 10; i++)
        {
            array[2][i] = 9 * (i+1);
        }
    }
    
    // for (int i = 0; i < 10; i++)
    //     {
    //         printf("%d\n", array[1][i]);
    //     }
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            printf("%d\t", array[j][i]);
        }
        printf("\n");
    }
    
    // printf("%d\n", array[0][0]);
    return 0;
}

//6,8 and 9 are remianing...