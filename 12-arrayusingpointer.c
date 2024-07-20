#include <stdio.h>

int main(){
    int marks[] = {1, 3, 5, 7};
    int* p = marks; //it can be written as int* p = &marks[0];

    printf("The value of marks[0] is %d\n", *p);
    *p++;
    printf("The value of marks[1] is %d\n", *p);

    return 0;
}