//Program to Check Armstrong Number

#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    while (exp--) {
        result *= base;
    }
    return result;
}

int main() {
    int n, temp, digit, digits = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        digits = 1;
    } else {
        temp = n;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }
    }

    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        sum += power(digit, digits);
        temp /= 10;
    }

    if (n == 0)
        sum = 0;

    if (sum == n)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}