#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0));

    int random = rand() % 100 + 1;
    int no_of_guesses = 0;
    int guessed;

    // printf("Random number = %d", random);

    do
    {
        printf("Guess the number : ");
        scanf("%d", &guessed);
        if (guessed>random)
        {
            printf("Lower number plz !\n");
        }
        else if(random>guessed)
        {
            printf("Higher number plz !\n");
        }
        else
        {
            printf("Congrats !\n");
        }
        no_of_guesses++;
    }
     while (guessed != random);

    printf("You guessed the number in %d guesses", no_of_guesses);
    


    return 0;
}