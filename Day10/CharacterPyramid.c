#include <stdio.h>
int main() {
    int i, j;
    char ch=65;
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5 - i; j++)       //to print spaces
            printf(" ");
        for(j = 1; j <= i; j++)             //to print increasing characters
            printf("%c", ch + j - 1);
        for(j = i - 1; j >= 1; j--)         // to print decreasing characters 
            printf("%c", ch + j - 1);

        printf("\n");
    }

    return 0;
}