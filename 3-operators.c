/* Operator Precedence (In absence of Parentheses)
1 - !
2 - * or % or / (Left to Right)
3 - + or -
4 - < or > or <= or >=
5 - == or !=
6 - &&
7 - ||
8 - =
*/

#include <stdio.h>

int main(){
    int a=8;
    int b=4;
    int c=2;

    printf("The Value is %d\n", a*b%3 + a*c/2);
    // a*b%3 + a*c/2
    // a*b%3 + 16/2
    // a*b%3 + 8
    // 32%3 + 8
    // 2 + 8
    // 10
    return 0;
}