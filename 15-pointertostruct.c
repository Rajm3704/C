#include <stdio.h>

struct employee
{
    int code;
    int salary;
    char work[30];
}e1;

int main(){
    struct employee *p;
    p = &e1;
    p -> code = 3704;  // (*ptr).code == ptr -> code
    printf("%d\n", e1.code);
    return 0;
}