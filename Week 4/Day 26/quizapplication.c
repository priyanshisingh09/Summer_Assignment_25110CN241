// Quiz Application

#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("********** QUIZ APPLICATION **********\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;

    printf("\nQ2. Which language is known as the mother of all programming languages?\n");
    printf("1. C\n2. Java\n3. Python\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
        score++;

    printf("\nQ3. How many days are there in a leap year?\n");
    printf("1. 364\n2. 365\n3. 366\n4. 367\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
        score++;

    printf("\nQ4. Which planet is known as the Red Planet?\n");
    printf("1. Venus\n2. Jupiter\n3. Mars\n4. Saturn\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
        score++;

    printf("\nQ5. What is the result of 15 + 20?\n");
    printf("1. 30\n2. 35\n3. 40\n4. 45\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;

    printf("\nQ6. Which symbol is used to end a C statement?\n");
    printf("1. :\n2. ;\n3. .\n4. ,\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;

    printf("\nQ7. Which keyword is used to exit a loop in C?\n");
    printf("1. continue\n2. stop\n3. break\n4. return\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
        score++;

    printf("\nQ8. Which is the largest ocean in the world?\n");
    printf("1. Atlantic\n2. Indian\n3. Arctic\n4. Pacific\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
        score++;

    printf("\nQ9. Which company developed the C language?\n");
    printf("1. Microsoft\n2. Bell Labs\n3. Google\n4. IBM\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;

    printf("\nQ10. What is the square root of 144?\n");
    printf("1. 10\n2. 11\n3. 12\n4. 13\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
        score++;

    printf("\n=====================================\n");
    printf("Your Final Score = %d out of 10\n", score);

    if (score == 10)
        printf("Excellent!\n");
    else if (score >= 8)
        printf("Very Good!\n");
    else if (score >= 5)
        printf("Good!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}