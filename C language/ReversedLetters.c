#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse characters between two pointers
void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

void reverseWords(char *str) {
    char *word_start = NULL;
    char *temp = str;

    while (*temp) {
        if ((word_start == NULL) && !isspace(*temp)) {
            word_start = temp;
        }
        if (word_start && (isspace(*temp) || *(temp + 1) == '\0')) {
            char *word_end = (isspace(*temp)) ? temp - 1 : temp;
            reverse(word_start, word_end);
            word_start = NULL;
        }
        temp++;
    }
}

/*
int main() {
    char str[] = "I LOVE AUTOMATA";
    reverseWords(str);
    printf("%s\n", str);
    return 0;
}
*/

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer string input

    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    reverseWords(str);
    printf("%s\n", str);
    return 0;
}
