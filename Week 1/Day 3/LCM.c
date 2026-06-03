//Program to Find LCM of two numbers

#include <stdio.h>

int main() {
    int a, b, lcm, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    for (lcm = max; lcm <= a * b; lcm += max) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
    }

    printf("LCM = %d\n", lcm);

    return 0;
}