#include <stdio.h>

int main() {
    int a, b , i, gcd = 1, scd = -1, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n Select operation to be performed: ");
    printf("\n 1. Smallest Common Divisor (other than 1)");
    printf("\n 2. Greatest Common Divisior (GCD) \n");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            for(i = 2; i <=a && i <=b; i++) {
                if(a % i == 0 && b % i == 0) {
                    scd = i;
                    break;
                }
            }

            if(scd == -1)
                printf("\n No comon divisor other than 1 \n");
            else
                printf("\n Smallest Common Divisor = %d\n", scd);
            break;

        case 2:
            for(i = 1; i <=a && i <= b; i++) {
                if(a % i == 0 && b % i == 0) {
                    gcd = i;
                }
            }

            printf("\n GCD = %d \n", gcd);
            break;

        default:
            printf("\n Invalid choice \n");

    }

    return 0;
}