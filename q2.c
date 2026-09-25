#include <stdio.h>
int main() {
    int age;
    float height;
    char grade;

    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Height (in meters): ");
    scanf("%f", &height);
    printf("Enter Grade: ");
    scanf(" %c", &grade);

    printf("\nAge: %d\nHeight: %.2f m\nGrade: %c\n", age, height, grade);
    return 0;
}
