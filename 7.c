#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "JOMMO KENYATTA";
    int len = strlen(word);
    printf("Original word: %s\n", word);
    printf("Reversed word: ");
    for (int i = len - 1; i >= 0; i--)
        printf("%c", word[i]);

    printf("\n");
    return 0;
    }
