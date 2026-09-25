#include <stdio.h>
int main() {
    float basic, allowance, bonus, finalSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);
    printf("Enter Allowance: ");
    scanf("%f", &allowance);
    printf("Enter Bonus: ");
    scanf("%f", &bonus);

    finalSalary = basic + allowance + bonus;
    printf("Final Salary = %.2f\n", finalSalary);

    return 0;
}
