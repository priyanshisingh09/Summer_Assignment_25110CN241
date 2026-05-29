//Program to Reverse a number.

#include <stdio.h>

int main() {
    int number, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}