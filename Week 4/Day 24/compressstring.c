// Compress a string

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int count = 1;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
        count = 1;
    }

    return 0;
}