#include <stdio.h>

int main() {
    char color;

    printf("Enter a traffic light color (R, Y, or G): ");
    scanf("%c", &color);

    switch (color) {
        case 'R':
        case 'r':
            printf("STOP\n");
            break;
        case 'Y':
        case 'y':
            printf("Get Ready\n");
            break;
        case 'G':
        case 'g':
            printf("Go\n");
            break;
        default:
            printf("Invalid color entered\n");
    }

    return 0;
}
