#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    int salary;
    char work[30];
}e1, e2;


int main(){
    struct employee company[20];
    // e1.code = 1234;
    company[0].code = 1444;
    e1.salary = 45000;
    strcpy(e1.work, "Web Development");
    printf("%d\n", company[0].code);
    printf("%d\n", e1.salary);
    printf("%s\n", e1.work);
    return 0;
}