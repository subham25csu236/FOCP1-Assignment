/* Q6Create a C program that allows the user to convert between Binary and Decimal systems based
on their choice, showcasing understanding of data encoding and computer number systems used in
hardware-level design.*/
//Create a C program to convert between Binary and Decimal systems
#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    long long binary;
    int decimal = 0, i = 0, rem, num;
    printf("Number System Converter\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%lld", &binary);
            while (binary != 0) {
                rem = binary % 10;
                decimal += rem * pow(2, i);
                binary /= 10;
                i++;
            }
            printf("Decimal equivalent = %d\n", decimal);
            break;
        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &num);
            long long bin = 0;
            int place = 1;
            while (num > 0) {
                rem = num % 2;
                bin += rem * place;
                num /= 2;
                place *= 10;
            }
            printf("Binary equivalent = %lld\n", bin);
            break;
        default:
            printf("Invalid choice! Please select 1 or 2.\n");
    }
    return 0;
}
