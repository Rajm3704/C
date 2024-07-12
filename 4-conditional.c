#include <stdio.h>

int main(){
    int age;
    printf("Enter the Age\n");
    scanf("%d", &age);

    if(age>=60){
        printf("You are a Senior Citizen and you can Drive!");
    }
    else if(age>=18){
        printf("You can Drive!");
    }
    else{
        printf("You can't Drive!");
    }
    return 0;
}