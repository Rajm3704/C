//What does this line of code produces int a = 4; printf("%d %d %d \n", a, ++a, a++);

#include <stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // 6 6 4
    // 4 5 5
    //both the answers are correct some compilers compiles left to right and vice-versa.
    return 0;
}