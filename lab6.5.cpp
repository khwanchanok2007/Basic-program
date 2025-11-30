#include <stdio.h>
#include <string.h> // for strcspn
#define MAX_SIZE 100

// count Vowels with Pointer function
int countVowelsWithPointer(char *str) {
    int count = 0;
    char *ptr = str;

    while(*ptr != 0) {
        char ch = *ptr;

        if (ch == 'A' || ch == 'a' ||
            ch == 'E' || ch == 'e' ||
            ch == 'I' || ch == 'i' ||
            ch == 'O' || ch == 'o' ||
            ch == 'U' || ch == 'u') {
            count++;
        }
        ptr++;
    }
    return count;
}

int main() {
    char sentence[MAX_SIZE];
    int vowelCount;

    // NULL terminator
    printf("Enter a sentence: ");
    if (fgets(sentence, MAX_SIZE, stdin) == NULL) {
        return 1;
    }

    sentence[strcspn(sentence, "\n")] = '\0'; // remove new line

    vowelCount = countVowelsWithPointer(sentence);

    printf("\n--- STRING ANALYSIS REPORT ---\n");
    printf("Input String: \"%s\"\n", sentence);
    printf("Total Vowel Count: %d\n", vowelCount);

    return 0;
}