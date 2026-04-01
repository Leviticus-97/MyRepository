#include <stdio.h>
#include <math.h>

int main() {
    long binary;
    int decimal = 0, i = 0, rem;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    long temp = binary;
    while (temp > 0) {
        rem = temp % 10;
        decimal += rem * pow(2, i);
        temp = temp /10;
        i++;
    }

    printf("Decimal equivalent of %ld is %d \n", binary , decimal);

    return 0;

}