#include <stdio.h>
int main() {
    int marks[5], total = 0;
    float percentage;

    printf("Enter marks of 5 subjects (out of 100):\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5.0;
    printf("Total Marks = %d\nPercentage = %.2f%%\n", total, percentage);

    return 0;
}
