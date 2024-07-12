/*What will the output of the program
int a = 10;
if (a = 11){
printf("I am 11");
}
else{
printf("I am not 11");
}
ANS: I am 11 because here (a=11) assignment operator is used instead of relational operator
*/

#include <stdio.h>

int main(){
    int a = 10;
    if (a = 11){
        printf("I am 11");
    }
    else{
        printf("I am not 11");
    }
    return 0;
}