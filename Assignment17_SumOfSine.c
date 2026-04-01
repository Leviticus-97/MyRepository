#include <stdio.h>

int main() {
    float x, sum = 0, term;
    int n, i, j;
    long fact;
    int power;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        power = 2 * i + 1;

        float xpow = 1;
        for (j = 0; j < power; j++)
            xpow *= x;

        fact = 1;
        for (j = 1; j <= power; j++)
            fact *= j;

        term = xpow / fact;

        if (i % 2 == 0)
            sum += term;
        else
            sum -= term;
    }

    printf("Sum of sine series = %f\n", sum);
    return 0;
}