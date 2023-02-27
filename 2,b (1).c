#include <stdio.h>

int main() {
    float length, width;
    float perimeter, area;

    // Input validation loop
    for (;;) {
        printf("Enter length: ");
        scanf("%f", &length);
        if (length >= 0) {
            break;
        }
        printf("Length must be non-negative. Please try again.\n");
    }

    for (;;) {
        printf("Enter width: ");
        scanf("%f", &width);
        if (width >= 0) {
            break;
        }
        printf("Width must be non-negative. Please try again.\n");
    }

    // Calculate perimeter and area
    perimeter = 2 * (length + width);
    area = length * width;

    // Display results
    printf("Perimeter: %.2f\n", perimeter);
    printf("Area: %.2f\n", area);

    return 0;
}
