#include <stdio.h>

// swap using call by value - works on copies
void swap_by_value(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside swap_by_value: x = %d, y = %d\n", x, y);
}

// swap using call by reference - works on original variables via pointers
void swap_by_reference(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // call by value - originals will NOT change
    printf("\nBefore (value): a = %d, b = %d\n", a, b);
    swap_by_value(a, b);
    printf("After  (value): a = %d, b = %d\n", a, b);

    // call by reference - originals WILL change
    printf("\nBefore (reference): a = %d, b = %d\n", a, b);
    swap_by_reference(&a, &b);
    printf("After  (reference): a = %d, b = %d\n", a, b);

    return 0;
}