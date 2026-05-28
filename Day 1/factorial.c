//Program to Find factorial of a number

#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    printf("Enter a non-negative number: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial of negative numbers is not defined.\n");
        return 0;
    }

    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}