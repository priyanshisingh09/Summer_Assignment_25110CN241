//Program to Find product of digits. 

#include <stdio.h>
int main(){ 
    int number, product = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        product *= number % 10;
        number /= 10;
    }

    printf("Product of digits = %d\n", product);

    return 0;
}