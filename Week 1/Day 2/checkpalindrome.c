//Program to Check whether a number is palindrome. 

#include <stdio.h>

int main() {
    int number, original, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    if (number < 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}