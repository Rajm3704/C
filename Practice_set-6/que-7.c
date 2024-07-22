//Problem 3 with call by value, does it completes the work?

#include <stdio.h>

void val_change(int x){
    x = x * 10;
}

int main(){
    int a;
    printf("enter a:\n");
    scanf("%d", &a);

    printf("the value of i is %d\n",a);
    val_change(a);
    printf("the value of i is %d\n",a);
    return 0;
}  //It does not change the real value of the variable a.