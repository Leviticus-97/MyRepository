#include <stdio.h>
#include <math.h>

int main()
{
    int n,a,b;
    int choice;
    printf("Enter a number: ");
    scanf("%lf" , &n);
    printf("Select the operation you wish to perform \n");
    printf("1. Square Root \n")
    printf("2. Sqaure \n");
    printf("3. Cube \n");
    printf("$. Check if Prime \n");
    printf("5. Factorial \n");
    printf("6. Prime Factors \n");
    scanf("%d" , &choice);
    switch(choice)
    {
        case 1:
        {
            printf("The square root of your number is : %f" , pow(n,0.5));
            break;
        }
        case 2:
        {
            printf("The square of your number is : %f" , pow(n,2));
            break;
        }
        case 3:
        {
            printf("The cube of your number is : %f" , pow(n,3));
            break;
        }
        case 4:
        {
            printf("");
            break;
        }
        case 5:
        {
            printf("The factorial of your number is : %f" , tgamma(n+1));
            break;
        }
        case 6:
        {
            printf("");
            break;
        }
    }
    return 0;
}