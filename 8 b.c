#include <stdio.h>

int main() {
    char lowercase, uppercase;

    printf("Enter a lowercase character: ");
    scanf("%c", &lowercase);

    // Convert lowercase to uppercase
    uppercase = lowercase - 32;

    printf("Uppercase equivalent: %c\n", uppercase);

    return 0;
}
