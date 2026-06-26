// Number Guessing Game

#include <stdio.h>27
#include <stdlib.h>
#include <time.h>

int main()
{
    int lower, upper, number, guess, attempts = 0;

    printf("Enter the lower limit: ");
    scanf("%d", &lower);

    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    if (lower >= upper)
    {
        printf("Invalid range.\n");
        return 0;
    }

    srand(time(0));
    number = rand() % (upper - lower + 1) + lower;

    printf("Guess the number between %d and %d\n", lower, upper);

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > number)
            printf("Too High!\n");
        else if (guess < number)
            printf("Too Low!\n");
        else
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);

    } while (guess != number);

    return 0;
}