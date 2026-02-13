#include <stdio.h>

int main(){
    int a,b,c,i;
    float d;
    int choice , fact , exp;

    printf("Select the operation you wish to perform via the number : \n");
    printf("ADDITION \n");
    printf("SUBTRACTION \n");
    printf("MULTIPLICATION \n");
    printf("DIVISION \n");
    printf("EXPONENT \n");
    printf("FACTORIAL \n");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            scanf("%d %d" , &a,&b);
            printf("Addition : %d" , a+b);
            break;

        case 2:
            scanf("%d %d" , &a,&b);
            printf("Subtraction : %d" , a-b);
            break;

        case 3:
            scanf("%d %d" , &a,&b);
            printf("Multiplication : %d" , a*b);
            break;

        case 4:
            scanf("%d %d" , &a,&b);
            if (b != 0)
                printf("Division : %f" , (float) a/b);
            else
                printf("Can't divide by 0!");
            break;

        case 5:
            scanf("%d %d" , &a,&b);
            for(exp = 1, i = 1 ; i<=b ; i++ )
            {
                exp=exp*a;
            }
            printf("%d to the power %d is : %d" ,a ,b ,exp);
            break;

        case 6:
            scanf("%d" , &a);
            fact = 1;
            for(i = 1; i<=a; i++ )
                fact=fact*i;
            printf("The factorial of %d is: %d" , a, fact);
            break;
    }
}