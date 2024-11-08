#include <stdio.h>

int main() {
    float hourly_wage, hours_worked, gross_pay, taxes, net_pay;

    // Get user input
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);
    printf("Enter hours worked: ");
    scanf("%f", &hours_worked);

    // Calculate gross pay
    if (hours_worked > 40) {
        gross_pay = (40 * hourly_wage) + ((hours_worked - 40) * (hourly_wage * 1.5));
    } else {
        gross_pay = hours_worked * hourly_wage;
    }

    // Calculate taxes
    if (gross_pay <= 600) {
        taxes = gross_pay * 0.15;
    } else {
        taxes = 600 * 0.15 + (gross_pay - 600) * 0.20;
    }

    // Calculate net pay
    net_pay = gross_pay - taxes;

    // Display results
    printf("Gross pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net pay: $%.2f\n", net_pay);

    return 0;
}