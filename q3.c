#include <stdio.h>
int main() {
    float price;
    int quantity;
    float total;

    printf("Enter Price of item: ");
    scanf("%f", &price);
    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;
    printf("Total Bill = %.2f\n", total);

    return 0;
}
