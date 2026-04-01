#include <stdio.h>

int main() {
    int a[50];
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter integers: ");
    for (i = 0; i < n ; i++)
        scanf("%d" , &a[i]);

    printf("Even numbers are: ");
    for (i = 0;i <n; i++)
        if(a[i] % 2 == 0)
            printf("%d ", a[i]);

    printf("\n Odd numbers are: ");
    for (i = 0;i <n; i++)
        if(a[i] % 2 != 0)
            printf("%d ", a[i]);

    printf("\n");
    return 0;

    
}