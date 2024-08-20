#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int player, computer = rand() % 3;
    printf("enter 0 for stone, 1 for paper and 2 for scisor: ");
    scanf("%d", &player);
    printf("computer: %d\n", computer);
    
    if (player == computer)
    {
        printf("It's a tie! Try Again Plz\n");
    }
    else if(player == 0 && computer == 1){
        printf("Sorry, You Lost\n");
    }
    else if(player == 0 && computer == 2){
        printf("Hurray, You Won\n");
    }
    else if(player == 1 && computer == 2){
        printf("Sorry, You Lost\n");
    }
    else if(player == 1 && computer == 0){
        printf("Hurray, You Won\n");
    }
    else if(player == 2 && computer == 0){
        printf("Sorry, You Lost\n");
    }
    else if(player == 2 && computer == 1){
        printf("Hurray, You Won\n");
    }
    return 0;
}