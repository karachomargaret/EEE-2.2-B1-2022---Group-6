#include <stdio.h>

int main() {
    char name[50];
    float eng_marks, math_marks, sci_marks, avg_marks;

    printf("Enter name of student: ");
    scanf("%s", name);

    printf("Enter marks obtained in English: ");
    scanf("%f", &eng_marks);

    printf("Enter marks obtained in Maths: ");
    scanf("%f", &math_marks);

    printf("Enter marks obtained in Science: ");
    scanf("%f", &sci_marks);

    avg_marks = (eng_marks + math_marks + sci_marks) / 3.0;

    printf("Name: %s\n", name);
    printf("Average Marks: %.2f\n", avg_marks);

    return 0;
}
