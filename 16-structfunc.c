#include <stdio.h>

struct employee
{
    int code;
    float salary;
};

void show(struct employee e){
    printf("The employee Code is: %d\n", e.code);
    printf("Employee Salary is %0.2f\n", e.salary);
}


int main(){
    struct employee e1;
    e1.code = 6969;
    e1.salary = 45000;
    show(e1);
    return 0;
}