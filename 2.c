#include <stdio.h>

int main() {
    float length, width, perimeter, area;

    do {
        printf("Enter the length of the rectangle: ");
        scanf("%f", &length);

        printf("Enter the width of the rectangle: ");
        scanf("%f", &width);

        if (length < 0 || width < 0) {
            printf("Error: Length and width must be non-negative.\n");
        }
    } while (length < 0 || width < 0);

    perimeter = 2 * (length + width);
    area = length * width;

    printf("Perimeter: %.2f\n", perimeter);
    printf("Area: %.2f\n", area);

    return 0;
}
