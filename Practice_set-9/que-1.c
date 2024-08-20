//Write a function ‘sumVector’ which returns the sum of two vectors passed to it. The vectors must be two–dimensional.

#include <stdio.h>

struct vector{
    int x;
    int y;
};


int sumVector(struct vector a, struct vector b){
    int sum_x = a.x + b.x;
    int sum_y = a.y + b.y;
    printf("The addition vector is %di + %dj\n", sum_x, sum_y);
}

int main(){
    struct vector v1, v2;
    v1.x = 1;
    v1.y = 2;
    v2.x = 3;
    v2.y = 4;
    sumVector(v1, v2);
    return 0;
}