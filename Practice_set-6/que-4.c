//Write a function and pass the value by reference.

#include <stdio.h>

int var_change(int* p){
    *p = 45;
}

int main(){
    int a = 18;
    printf("The value of var a is %d\n", a);
    var_change(&a);
    printf("The new value of a is %d", a);
    return 0;
}