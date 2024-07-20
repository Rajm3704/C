#include <stdio.h>

int main(){
    int a = 7;
    int* p = &a;

    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", p);
    p++;
    printf("The address of a is %u\n", p);  //The value of address incremented would be by the size of int
    return 0;
}