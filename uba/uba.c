#include <stdio.h>

int main() {
    int customer, hours, i;
    int totalHours = 0;
    int discountedCustomer = 0;
    float bill, totalRevenue = 0;

    printf("===== INTERNET CAFE BILLING =====\n");

    do {
        printf("Enter number of customers: ");

        if (scanf("%d", &customer) != 1) {
            printf("Invalid input! Enter a whole number.\n");
            return 1;
        }

        if (customer < 1) {
            printf("Customer must be at least 1.\n");
        }

    } while (customer < 1);

    for (i = 1; i <= customer; i++) {
        printf("\nCustomer %d\n", i);

        do {
            printf("Enter hours used: ");

            if (scanf("%d", &hours) != 1) {
                printf("Invalid input! Enter a whole number.\n");
                return 1;
            }

            if (hours < 1) {
                printf("Hours must be at least 1.\n");
            }

        } while (hours < 1);

        bill = hours * 20;

        if (hours > 5) {
            bill = bill - (bill * 0.10);
            discountedCustomer++;
        }

        printf("Hours used: %d\n", hours);
        printf("Customer bill: P%.2f\n", bill);

        totalHours += hours;
        totalRevenue += bill;
    }

    printf("\n===== FINAL SUMMARY =====\n");
    printf("Total customers served: %d\n", customer);
    printf("Total hours used: %d\n", totalHours);
    printf("Total revenue: P%.2f\n", totalRevenue);
    printf("Discounted customers: %d\n", discountedCustomer);

    return 0;
}