#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[100], word[100];
    int maxLen = 0;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    int j = 0;

    for (int i = 0;; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            word[j] = '\0';

            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }

            j = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        } else {
            word[j++] = str[i];
        }
    }

    printf("Longest word: %s\n", longest);
    return 0;
}