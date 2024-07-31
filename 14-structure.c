#include <stdio.h>
#include <string.h>

struct employee
{
    int e_code;
    int e_salary;
    char e_work[30];
};


int main(){
    struct employee e1, e2;
    e1.e_code = 1234;
    e1.e_salary = 45000;
    strcpy(e1.e_work, "Web Development");
    printf("%d\n", e1.e_code);
    printf("%d\n", e1.e_salary);
    printf("%s\n", e1.e_work);
    return 0;
}