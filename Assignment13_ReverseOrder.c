#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d" , &n);

    printf("Digits in reverse order: ");
    while(n >0) {
        printf("%d", n%10);
        n = n/10;
    }
    printf("\n");
    return 0;
}