#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter the number of which you want to view the table of: \n" );
    scanf("%d" ,&num);

    printf("The table for %d is : \n",num);

    for (i = 1; i<= 10; i++)
    {
        printf("%d x %d = %d \n", num,i,num*i);
    }
    return 0;
}