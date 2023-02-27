#include <stdio.h>

/* Function to calculate the area of a rectangle */
float calc_area(float length, float width) {
    float area = length * width;
    return area;
}

int main() {
    float length, width, area;

    /* Accept user input for dimensions */
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    /* Call the function to calculate area */
    area = calc_area(length, width);

    /* Output the dimensions and area */
    printf("Dimensions of rectangle: %0.2f x %0.2f\n", length, width);
    printf("Area of rectangle: %0.2f\n", area);

    return 0;
}
