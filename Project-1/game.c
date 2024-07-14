//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", randomNumber);
    int guessNumber, no_guesses=0;
    do{
        printf("Guess the number:\n");
        scanf("%d", &guessNumber);
    if(guessNumber > randomNumber){
        printf("Lower No. please\n");
    }
    else if(guessNumber < randomNumber){
        printf("Higher No. please\n");
    }
    no_guesses++;
    }while(guessNumber != randomNumber);

    printf("You guessed the Number in %d Guesses", no_guesses);
    return 0;
}
