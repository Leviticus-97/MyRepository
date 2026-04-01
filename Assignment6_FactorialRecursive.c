#include <stdio.h>

unsigned long long fact_iterative(int num);
unsigned long long fact_recursive(int num);

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("no fact for -ve\n");
    } else {
        printf("fact by %d Iterative = %llu\n", num, fact_iterative(num));
        printf("fact by %d Recursive = %llu\n", num, fact_recursive(num));
    }

    return 0;
}

unsigned long long fact_iterative(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

unsigned long long fact_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact_recursive(n - 1);
}