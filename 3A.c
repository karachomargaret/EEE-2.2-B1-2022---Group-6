include <stdio.h>

int main() {
    int count, num, sum = 0;
    float average;

    printf("Enter the number of integers: ");
    scanf("%d", &count);

    int i = 1;
    while (i <= count) {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);
        sum += num;
        i++;
    }

    average = (float) sum / count;
    printf("The average of the numbers is: %.2f\n", average);

    return 0;
}