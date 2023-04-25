#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber = 0;
    int guess;
    time_t t;
    // Initialization of random number generator
    srand((unsigned)time(&t));

    // get the random number
    randomNumber = rand() % 21;

    printf("This is a guessing game\n");
    printf("I have chosen a number between 0 and 20 which you must guess\n");

    for (int count = 5; count > 0; --count)
    {
        printf("You have %d tr%s \n", count, count == 1 ? "y" : "ies");
        scanf("%d", &guess);
        printf("Your guess: %d , The RandomNumber: %d\n", guess, randomNumber);
        if (guess == randomNumber)
        {
            printf("\nGRATZ , YOU WON\n");
            break;
        }
        else if (guess < 0 || guess > 20)
        {
            printf("Please Read the previous msg again , Number must be between 0 and 20\n");
        }
        else if (randomNumber < guess)
        {
            printf("my number is less then ur guess\n");
        }
        else if (randomNumber > guess)
        {
            printf("my number is higher than ur guess\n");
        }
    }
}