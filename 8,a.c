#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, root1, root2, discriminant;
    printf("Enter the coefficients a, b, and c of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);

    // calculate discriminant
    discriminant = b*b - 4*a*c;

    // check for real roots
    if (discriminant >= 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    // imaginary roots
    else {
        printf("a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
        printf("Root 1 = %.2f + %.2fi\n", -b/(2*a), sqrt(-discriminant)/(2*a));
        printf("Root 2 = %.2f - %.2fi\n", -b/(2*a), sqrt(-discriminant)/(2*a));
    }

    return 0;
}
