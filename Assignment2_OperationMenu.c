#include <stdio.h>

int main() {
    int a,b,c,i;
    float d;
    int choice, fact;

    printf("enter your choice \n");
    printf("+ \n");
    printf("- \n");
    printf("* \n");
    printf("/ \n");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
            scanf("%d %d",&a,&b);
            printf("the addition is %d", a+b);
            break;

        case 2:
            scanf("%d %d",&a,&b);
            printf("the subtraction is %d", a-b);
            break;

        case 3:
            scanf("%d %d",&a,&b);
            printf("the multiplication is %d", a*b);
            break;

        case 4:
            scanf("%d %d",&a,&b);
            if (b !=0)
                printf("the division is %f", (float)a/b);
            else
                printf("Invalid division");
            break;
    }
}