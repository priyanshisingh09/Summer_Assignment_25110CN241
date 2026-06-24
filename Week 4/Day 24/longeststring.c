// Longest word in a string

#include <stdio.h>
#include <string.h>

int main() {
    char str[500], longest[100];
    int maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char *word = strtok(str, " \n");

    while (word != NULL) {
        int len = strlen(word);

        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, word);
        }

        word = strtok(NULL, " \n");
    }

    printf("Longest word: %s", longest);

    return 0;
}