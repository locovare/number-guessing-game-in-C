#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void game();

int main()
{
    //GAME START
    game();

    return 0;
}

void game()
{

    srand(time(NULL));
    int r = rand() % 100 + 1;

    printf("%d\n", r);

    //printf("DEBUG: The number is %d\n", r); // Uncomment this line for testing

    char yn;
    int i;
    int guess;
    int won = 0;

    // start game shi
    printf("******************************************\n");
    printf("*WELCOME TO THE NUMBER GUESSING GAME IN C*\n");
    printf("******************************************\n");

    printf("The Number I'm thinking of is between 1 and 100!\n");

    for (i = 1; i <= 5; i++)
    {
        printf("Guess #%d: ", i);
        scanf("%d", &guess);

        if (guess > r)
        {
            printf("Your number is too high\n");                    
        }
        else if (guess < r)
        {   
            printf("Your number is too low\n");
        } 
        else
        {
            printf("YOU GOT IT! The number was: %d\n", r);
            won++;
            break;
        }
    }

    if (!won)
    {
        printf("You're out of guesses! The number was: %d", r);
    }
}