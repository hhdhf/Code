#include <stdio.h>

#define BASIC_PAY_RATE 12.00
#define OVERTIME_PAY_RATE (BASIC_PAY_RATE * 1.5)
#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.20
#define TAX_RATE_3 0.25
#define TAX_THRESHOLD_1 300
#define TAX_THRESHOLD_2 450

int main() {
    float hours_worked, gross_pay, tax, net_pay;

    printf("Nhap so gio lam viec: ");
    scanf("%f", &hours_worked);

    // Tính lương gross
    if (hours_worked <= 40) {
        gross_pay = hours_worked * BASIC_PAY_RATE;
    } else {
        gross_pay = 40 * BASIC_PAY_RATE + (hours_worked - 40) * OVERTIME_PAY_RATE;
    }

    // Tính thuế
    if (gross_pay <= TAX_THRESHOLD_1) {
        tax = gross_pay * TAX_RATE_1;
    } else if (gross_pay <= TAX_THRESHOLD_2) {
        tax = TAX_THRESHOLD_1 * TAX_RATE_1 + (gross_pay - TAX_THRESHOLD_1) * TAX_RATE_2;
    } else {
        tax = TAX_THRESHOLD_1 * TAX_RATE_1 + (TAX_THRESHOLD_2 - TAX_THRESHOLD_1) * TAX_RATE_2 + (gross_pay - TAX_THRESHOLD_2) * TAX_RATE_3;
    }

    // Tính lương net
    net_pay = gross_pay - tax;

    // Hiển thị kết quả
    printf("Luong gross: $%.2f\n", gross_pay);
    printf("Thue: $%.2f\n", tax);
    printf("Luong net: $%.2f\n", net_pay);

    return 0;
}

