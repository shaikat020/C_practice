#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int secretNumber, guess, attempts = 0;

    // Generate a random number between 1 and 100
    srand(time(NULL));
    secretNumber = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I've chosen a number between 1 and 100. Let's see if you can guess it!\n");

    do
    {
        printf("Attempt %d: Guess the number: ", attempts + 1);
        scanf("%d", &guess);
        attempts++;

        if (guess == secretNumber)
        {
            printf("Congratulations! You guessed the correct number %d in %d attempts.\n", secretNumber, attempts);
            break;
        } 
        else if (guess < secretNumber) 
        {
            printf("Too low! Try again.\n");
        } 
        else 
        {
            printf("Too high! Try again.\n");
        }

    } 
    while (attempts < 6);

    if (attempts >= 6) 
    {
        printf("Sorry, you have reached the maximum number of attempts. The correct number was %d.\n", secretNumber);
    }

    return 0;
}