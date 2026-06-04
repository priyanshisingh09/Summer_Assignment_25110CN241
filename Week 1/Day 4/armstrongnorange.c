//Program to Find Armstrong Numbers in a Range

#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    while (exp--) {
        result *= base;
    }
    return result;
}

int main() {
    int start, end;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    for (int num = start; num <= end; num++) {
        int temp = num, digits = 0, sum = 0;

        if (num == 0) {
            digits = 1;
        } else {
            while (temp != 0) {
                digits++;
                temp /= 10;
            }
        }

        temp = num;

        while (temp != 0) {
            int digit = temp % 10;
            sum += power(digit, digits);
            temp /= 10;
        }

        if (num == 0)
            sum = 0;

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}